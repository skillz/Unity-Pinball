SDKDIR=sdk_ios

# build the Unity package and copy the needed files to the ouput directory
. "${WORKSPACE}/SkillzUnityWrapper/create-unity-folder.sh"

# copy results of Unity build to appropriate place
cp -R "${WORKSPACE}/SkillzUnityWrapper/output/" $SDKDIR/Unity
