# Pinball - Unity Cross Platform Example Project

This repo contains an example of the Pinball game with Skillz integration. The purpose of this example is to show how to integrate a Unity Cross Platform game with the Skillz Platform .

This project is setup to work with the latest version of the Skillz Android and iOS SDKs, which can be found at https://skillz.com/developer/downloads. Once the SDK is downloaded, the Skillz embedded framework will need to be added to the project. 

The Installation for this project was divided into 3 major steps: [Installing the Skillz framework](https://github.com/skillz/Unity-Pinball/commit/600de047316e571005fdd1f084051d4b5a299b3e),[Implementing Core Skillz](https://github.com/skillz/Unity-Pinball/commit/95be864895e23fc2239ea25be0ca043a5159c35b), and [Implementing Skillz Fairness](https://github.com/skillz/Unity-Pinball/commit/2a7a4e1fe6257567327c4eb155ba1fb13f806cb3).

### Skillz example instructions <br />
Step 1: This [commit](https://github.com/skillz/Unity-Pinball/commit/600de047316e571005fdd1f084051d4b5a299b3e) completed the [Installing the Skillz framework](https://cdn.skillz.com/doc/developer/unity/ios/integrate_skillz_sdk/install_framework/) and step 1 of [Importing the Unity Android Skillz wrapper](https://cdn.skillz.com/doc/developer/unity/android/integrate_skillz_sdk/install_framework/) steps of the Skillz Integration. 

* This step adds the framework to the project and configures the project to link with the Skillz framework.<br /><br />

Step 2: This [commit](https://github.com/skillz/Unity-Pinball/commit/95be864895e23fc2239ea25be0ca043a5159c35b) completed the [Implementing Core iOS Skillz](https://cdn.skillz.com/doc/developer/unity/ios/integrate_skillz_sdk/set_up_skillz_delegate/) and [Implementing Core Android Skillz](https://cdn.skillz.com/doc/developer/unity/android/integrate_skillz_sdk/install_framework/) steps of the Skillz Integration. 

* This step integrates the Skillz platform with the project and will add multiplayer tournaments using the Skillz API.<br /><br />

Step 3: This [commit](https://github.com/skillz/Unity-Pinball/commit/2a7a4e1fe6257567327c4eb155ba1fb13f806cb3) completed the [Implementing Skillz Fairness](https://https://cdn.skillz.com/doc/developer/unity/ios/integrate_skillz_sdk/reimplement_random_number_generation_rng_for_fairness/) step of the Skillz Integration. 

* This step ensures that the players' games are fair by implementing a consistent random number generation.<br /><br />

Xcode Project: [commit](https://github.com/skillz/Unity-Pinball/commit/1ed5c05370d036033e6b0308b309e1034828ce2f).<br />
Android Studio Project: [commit](https://github.com/skillz/Unity-Pinball/commit/9ccae048078cd651c4902ff2a6764d854ab712d1).<br /><br />

For additional SDK installation details refer to the [Skillz documentation](https://cdn.skillz.com/doc/developer/).
<hr/>

All credits to the design of this game belongs to Zhouyu Wu.

Original code: https://github.com/zwu002/Unity-Pinball

Use governed by the MIT License.
