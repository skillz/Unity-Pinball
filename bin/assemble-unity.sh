# package SDK release
GITVERSION=`git describe --match '*.*.*' | sed -e 's,-.*,,'`
echo GITVERSION is ${GITVERSION}
SDKDIR=sdk_unity_crossplatform

# copy the Unity wrapper docs into the packaged SDK
cd ${WORKSPACE}
mkdir -p $SDKDIR/Unity

# build the Unity package and copy the needed files to the ouput directory
echo "UNITY - call create-unity-folder"
. "${WORKSPACE}/SkillzUnityWrapper/create-unity-folder.sh"
# /bin/sh /SkillzUnityWrapper/create-unity-folder.sh
echo "UNITY - finished calling create-unity-folder"

# copy results of Unity build to appropriate place
cp -R "${WORKSPACE}/SkillzUnityWrapper/output/" $SDKDIR/Unity
