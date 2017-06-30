#!/bin/sh
WORKDIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
OUPUT_PATH="${WORKDIR}/output"
UNITY_BIN="/Applications/Unity/Unity.app/Contents/MacOS/Unity"
EXPORT_PATH="${OUPUT_PATH}/skillz_ios.unitypackage"
PROJECT_PATH="${WORKDIR}/UnityPackage/SkillzUnityPackageProject"
ASSETS_PATH="Assets"
XCODE_SRC_IN_PATH="${WORKDIR}/XcodeFiles"
XCODE_SRC_OUT_PATH="${PROJECT_PATH}/Assets/Skillz/Build/IncludeInXcode"
echo ${WORKDIR} WORKDIR
# echo ${OUPUT_PATH} OUPUT_PATH
# echo ${UNITY_BIN} UNITY_BIN
# echo ${EXPORT_PATH} EXPORT_PATH
# echo ${PROJECT_PATH} PROJECT_PATH
# echo ${ASSETS_PATH} ASSETS_PATH
# echo ${OUPUT_PATH} OUPUT_PATH
# echo ${XCODE_SRC_IN_PATH} XCODE_SRC_IN_PATH
# echo ${XCODE_SRC_OUT_PATH} XCODE_SRC_OUT_PATH
mkdir "${PROJECT_PATH}/Assets/Plugins"
mkdir "${PROJECT_PATH}/Assets/Plugins/iOS"

rm -rf "$OUPUT_PATH"
mkdir -p "$OUPUT_PATH"


# Copy XcodeFiles into output path with proper directories
mkdir -p "$XCODE_SRC_OUT_PATH"
cp -R "${XCODE_SRC_IN_PATH}"/* "$XCODE_SRC_OUT_PATH"


# Create Unity package from blank project
"$UNITY_BIN" -batchmode -logFile "${WORKDIR}/unity-package-creation.log" -projectPath "$PROJECT_PATH" -exportPackage "$ASSETS_PATH" "$EXPORT_PATH" -quit
echo Finished running create-unity-folder
