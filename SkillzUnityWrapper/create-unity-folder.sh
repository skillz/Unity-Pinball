#!/bin/sh

WORKDIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
OUPUT_PATH="${WORKDIR}/output"
UNITY_BIN="/Applications/Unity/Unity.app/Contents/MacOS/Unity"
EXPORT_PATH="${OUPUT_PATH}/skillz_ios.unitypackage"
PROJECT_PATH="${WORKDIR}/SkillzUnityPackageProject"
ASSETS_PATH="Assets"
#XCODE_SRC_IN_PATH="${WORKDIR}/XcodeFiles" #probably not needed
#XCODE_SRC_OUT_PATH="${PROJECT_PATH}/Assets/Skillz/Build/IncludeInXcode" #probably not needed

#probably not needed
# mkdir "${PROJECT_PATH}/Assets/Plugins"
# mkdir "${PROJECT_PATH}/Assets/Plugins/iOS"

rm -rf "$OUPUT_PATH"
mkdir -p "$OUPUT_PATH"

#test
# Copy XcodeFiles into output path with proper directories
# probably not needed anymore since everything is inside SkillzUnityProject
# mkdir -p "$XCODE_SRC_OUT_PATH"
# cp -R "${XCODE_SRC_IN_PATH}"/* "$XCODE_SRC_OUT_PATH"


# Create Unity package from blank project
"$UNITY_BIN" -batchmode -quit -logFile "${WORKDIR}/unity-package-creation.log" -projectPath "$PROJECT_PATH" -exportPackage "$ASSETS_PATH" "$EXPORT_PATH"
