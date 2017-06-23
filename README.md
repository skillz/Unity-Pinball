# Pinball - Unity Cross Platform Example Project

This repo contains an example of the Pinball game with Skillz integration. The purpose of this example is to show how to integrate a Unity Cross Platform game with the Skillz Platform .

This project is setup to work with the latest version of the Skillz Android and iOS SDKs, which can be found at https://skillz.com/developer/downloads. Once the SDK is downloaded, the Skillz embedded framework will need to be added to the project.

The Installation for this project was divided into 3 major steps: [Installing the Skillz framework](https://github.com/skillz/Unity-Pinball/pull/3/commits/4f822a72e0670484d3a178eb1e5158fc14d94db2),[Implementing Core Skillz](https://github.com/skillz/Unity-Pinball/pull/3/commits/3864d195cd956303556090c394881df9de2d27b2), and [Implementing Skillz Fairness](https://github.com/skillz/Unity-Pinball/pull/3/commits/006c95afb3755655c0532106f1e7f911719d6471).

### Skillz example instructions <br />
Step 1: This [commit](https://github.com/skillz/Unity-Pinball/pull/3/commits/4f822a72e0670484d3a178eb1e5158fc14d94db2) completed the [Installing the Skillz framework](https://cdn.skillz.com/doc/developer/unity/ios/integrate_skillz_sdk/install_framework/) and step 1 of [Importing the Unity Android Skillz wrapper](https://cdn.skillz.com/doc/developer/unity/android/integrate_skillz_sdk/install_framework/) steps of the Skillz Integration.

* This step adds the framework to the project and configures the project to link with the Skillz framework.<br /><br />

Step 2: This [commit](https://github.com/skillz/Unity-Pinball/pull/3/commits/3864d195cd956303556090c394881df9de2d27b2) completed the [Implementing Core iOS Skillz](https://cdn.skillz.com/doc/developer/unity/ios/integrate_skillz_sdk/set_up_skillz_delegate/) and [Implementing Core Android Skillz](https://cdn.skillz.com/doc/developer/unity/android/integrate_skillz_sdk/install_framework/) steps of the Skillz Integration.

* This step integrates the Skillz platform with the project and will add multiplayer tournaments using the Skillz API.<br /><br />

Step 3: This [commit](https://github.com/skillz/Unity-Pinball/pull/3/commits/006c95afb3755655c0532106f1e7f911719d6471) completed the [Implementing Skillz Fairness](https://https://cdn.skillz.com/doc/developer/unity/ios/integrate_skillz_sdk/reimplement_random_number_generation_rng_for_fairness/) step of the Skillz Integration.

* This step ensures that the players' games are fair by implementing a consistent random number generation.<br /><br />

Step 4: This [commit](https://github.com/skillz/Unity-Pinball/pull/3/commits/1959513a00816b631e4249c81fbc1202fabdba00) shows you how to use the new method calls that were made available in the new cross platform wrapper.<br /><br />

Xcode Project: [commit](https://github.com/skillz/Unity-Pinball/commit/1ed5c05370d036033e6b0308b309e1034828ce2f).<br />
Android Studio Project: [commit](https://github.com/skillz/Unity-Pinball/commit/9ccae048078cd651c4902ff2a6764d854ab712d1).<br /><br />

For additional SDK installation details refer to the [Skillz documentation](https://cdn.skillz.com/doc/developer/).
<hr/>

All credits to the design of this game belongs to Zhouyu Wu.

Original code: https://github.com/zwu002/Unity-Pinball

Use governed by the MIT License.
