# package SDK release
SDKDIR=sdk_unity_crossplatform

# copy the Unity wrapper docs into the packaged SDK
cd ${WORKSPACE}
mkdir -p $SDKDIR/Unity

# build the Unity package and copy the needed files to the ouput directory
. "${WORKSPACE}/SkillzUnityWrapper/create-unity-folder.sh"

# copy results of Unity build to appropriate place
cp -R "${WORKSPACE}/SkillzUnityWrapper/output/" $SDKDIR/Unity
