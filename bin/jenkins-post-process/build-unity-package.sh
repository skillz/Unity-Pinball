
rm -rf ${WORKSPACE}/SkillzUnityWrapper/unity-package-creation.log

/bin/sh ./bin/assemble-unity.sh

pushd .

cd ${WORKSPACE}/SkillzUnityWrapper/output

zip -y -r ${WORKSPACE}/skillz_unity_crossplatform.unitypackage.zip skillz_unity_crossplatform.unitypackage

popd
