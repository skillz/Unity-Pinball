# package SDK release
GITVERSION=`git describe --match '*.*.*' | sed -e 's,-.*,,'`
echo GITVERSION is ${GITVERSION}
SDKDIR=sdk_ios_${GITVERSION}

# auto-document the Unity wrapper
# this may not be needed - unsure yet
cd "${WORKSPACE}/SkillzUnityWrapper"
sed -i '' "s/PLACEHOLDER_SDK_VERSION_FOR_JENKINS/${GITVERSION}/" DoxConfig
/Applications/Doxygen.app/Contents/Resources/doxygen DoxConfig

# copy the Unity wrapper docs into the packaged SDK
cd ${WORKSPACE}
mkdir -p $SDKDIR/Unity
cp -R "${WORKSPACE}/SkillzUnityWrapper/docs/" $SDKDIR/Unity
rm -rf "${WORKSPACE}/SkillzUnityWrapper/docs/"
mv -f "${SDKDIR}/Unity/html" "${SDKDIR}/Unity/docs"

# build the Unity package and copy the needed files to the ouput directory
. "${WORKSPACE}/SkillzUnityWrapper/create-unity-folder.sh"

# copy results of Unity build to appropriate place
cp -R "${WORKSPACE}/SkillzUnityWrapper/output/" $SDKDIR/Unity