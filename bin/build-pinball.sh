#!/bin/bash
#####

#####
# Build VC and Full for iOS Crashlytics, and .xcarchives
#####

cd "${WORKSPACE}"

# Link Sidious stored location for Unity lib.
echo "UNITY - start Sidious"
sudo ln -sf "/opt/sdk-integrations/CaveRunnerUnityLib/libiPhone-lib.a"  "/Users/Shared/jenkins-slave/workspace/SDK/Production Apps/Pinball Spyro/UnityPinballXcode/Libraries/libiPhone-lib.a"
echo "UNITY - end Sidious"

# Clean old artifacts
echo "UNITY - start cleaning old artifacts"
rm -rf "UnityPinballXcode/Skillz.framework"
rm -rf "UnityPinballXcode/build"

echo "UNITY - start unzipping"
unzip -q 'Skillz.framework.zip' -d "./UnityPinballXcode/"
mv "${WORKSPACE}/themes/theme.json" "${WORKSPACE}/UnityPinballXcode/Skillz.framework/theme.json"

cd "UnityPinballXcode"

echo "UNITY - export SDKVersion and New_tag and SDKVERSION"
export SDKVERSION=$(/usr/libexec/PlistBuddy -c "Print :CFBundleVersion" "${WORKSPACE}/UnityPinballXcode/Skillz.framework/Info.plist")
export NEW_TAG=`TZ=America/New_York date '+%y-%m-%d-%H:%M'`-${BUILD_NUMBER}

export SDKVERSION=${SDKVERSION}

echo ${SDKVERSION}

# Set Version numbers
echo "UNITY - set version numbers"
/usr/libexec/PlistBuddy -c "Set :CFBundleVersion \"${SDKVERSION}\"" -c "Save" "${WORKSPACE}/UnityPinballXcode/Info.plist"
/usr/libexec/PlistBuddy -c "Set :CFBundleShortVersionString \"${NEW_TAG}\"" -c "Save" "${WORKSPACE}/UnityPinballXcode/Info.plist"

# Build Full for Crashlytics
echo "UNITY - Build for crashlytics"
set -o pipefail && xcodebuild -sdk iphoneos -scheme Full -configuration Release clean build \
ONLY_ACTIVE_ARCH=NO BUILD_DIR=./build CODE_SIGN_IDENTITY="iPhone Distribution: Skillz Inc." | xcpretty
echo "UNITY - finish Build for crashlytics"

# Package Full Release Build
echo "UNITY - Package full release build"
rm -rf "${WORKSPACE}/PayloadFull/"
mkdir -p "${WORKSPACE}/PayloadFull/"
mv "${WORKSPACE}/UnityPinballXcode/build/Release-iphoneos/Pinball.app" "${WORKSPACE}/PayloadFull/"
echo "UNITY - Finish Package full release build"

cd "${WORKSPACE}"

# Create IPAs
echo "UNITY - Create Ipa"
rm -rf "Pinball.ipa"

rm -rf "Payload"
mv "PayloadFull" "Payload"
zip -r "Pinball.ipa" "Payload"
echo "UNITY - Finish Create Ipa"

# # Store Dsym files
# unzip -q Skillz.framework.dSYM.zip -d "UnityPinballXcode/build/Release-iphoneos"
# unzip -q Skillz_DEBUG.framework.dSYM.zip -d "UnityPinballXcode/build/Debug-iphoneos"

# "${WORKSPACE}/UnityPinballXcode/Crashlytics.framework/submit" 267045208f4b1d9fdcbf019068b81096fe16475a \
# bc1e89c576f18f877c98d2ca8a922096ef5415a8b5023e922eb6b2c474a455e1 \
# -ipaPath "${WORKSPACE}/Pinball.ipa" \
# -groupAliases SDK,qa-2,tournament-server,product
