# Unity-Pinball
2D Unity game for Android
# Unity-Pinball Example Skillz Integration

This repository contains an example cross-platform Unity game that integrates the Skillz SDK. It is intended to supplement the [documentation](https://cdn.skillz.com/doc/developer/unity/install_unity_sdk/) that walks users through the process of integrating a cross-platform Unity game.

All credits to the design of this game belongs to Zhouyu Wu.

Original code: https://github.com/zwu002/Unity-Pinball

Use governed by the MIT License.

## Build Environment

This project integrated the Skillz SDK version 21.0.25. Check the [Downloads](https://developers.skillz.com/downloads) page for the latest version.

The project was built on Unity 2018.3.7.

If you are experiencing trouble, please email integrations@skillz.com with a detailed description of the issue you are encountering.

## Commit Instructions

The commits in this repository have been organized to make the SDK integration easier to follow.

### Commit 01: Prepwork for SDK Integration

The [first commit](https://github.com/skillz/Unity-Pinball/commit/4775d2c1b011d19c813abaf621236e02737aed2a) makes some preparations before integrating the SDK. Specifically, the UI was altered in anticipation of launching the Skillz SDK, being able to abort a match, and removing soon to be dead code.

### Commit 02: Install the Skillz SDK

The [second commit](https://github.com/skillz/Unity-Pinball/commit/0316beb0e179e3a56f7b66580733f1dd12224da8) simply installs the Skillz SDK via Unity's Assets store by following the instructions on this [page](https://cdn.skillz.com/doc/developer/unity/install_from_asset_store/). At this point, the game is not integrated with the SDK and still compiles and runs normally.

### Commit 03: Getting In the Skillz SDK

Finally, the Skillz SDK is [integrated](https://github.com/skillz/Unity-Pinball/commit/86ad636e26bcfa083eb4ac73cb2b28941a753803) by following the instructions at this [page](https://cdn.skillz.com/doc/developer/unity/play_a_skillz_match/).

Changes in this commit include:
* Adding a `SkillzDelegate` game object to the scene that will launch the Skillz SDK.
* Modifying the `GameController.cs` script to implement the `SkillzMatchDelegate` interface. This methods of this interface are called to notify the game when a match is about to begin or end.
* Reporting the user's current score while a match is in progress.
* Reporting the user's final score when the match ends.
* Aborting a match.

### Commit 04: Ensuring Fairness

This [commit](https://github.com/skillz/Unity-Pinball/commit/7bcc2fc62f961f9cf5f4528386559bbc5aadc9f3) ensures fairness during a match by calling `SkillzCrossPlatform.Random.Range()` when setting a ball's initial direction and force. Refer to this [page](https://cdn.skillz.com/doc/developer/unity/reimplement_random_number_generation_rng_for_fairness/) for more details.

## Exports

This repository also contains exports to both Android and iOS.

### Android Export

This [commit](https://github.com/skillz/Unity-Pinball/commit/a819f2e278a2487f8c836681d23f906c5025ab49) has a working Android Studio project that followed the [corresponding instructions](https://cdn.skillz.com/doc/developer/unity/android/build_unity_android). The project was set up in Android Studio 3.3, with the game tested on a Google Pixel 2 emulator running Android Oreo.

### XCode Export

This [commit](https://github.com/skillz/Unity-Pinball/commit/7c9d0277423179d2399d72803a903a02125b7269) exported the game as an XCode project that followed the [corresponding instructions](https://cdn.skillz.com/doc/developer/unity/ios/build_unity_ios). The project was set up in XCode 10.1, with the game tested on an iPhone SE running iOS 11.3.

#### Build Instructions

Unlike the Android Studio project, the XCode project here needs some work in order to compile and run on an iOS device.

First, make sure you have the appropriate developer certificate and provisioning profiles to be able to run on an iOS device. The provisioning profiles need to set the bundle name to `com.skillz.unity.pinball`.

Second, the XCode project is missing the Skillz SDK and some libraries in order to save space on GitHub. You'll need to add these back in order to compile and run the game on iOS. Follow the instructions below to add these back.

##### Add the Skillz SDK

1. [Download](https://developers.skillz.com/downloads) the Skillz SDK v21.0.25 for iOS.
2. Copy `Skillz.framework` to `<repo_root>//Users/jlin/repos/Unity-Pinball/Platforms/iOS/Skillz Examples Pinball/` where `<repo_root>` is where you cloned this repo.
3. In XCode, navigate to the project's properties page, and select the `Build Phases` tab.
4. Under the `Embed Frameworks` drop-down, click the `` sign and add `Skillz.framework`. **Make sure the `Code Sign on Copy` option is checked!**

##### Add the other libraries

These libraries are from Unity, and should reside in `/Applications/Unity/PlaybackEngines/iOSSupport/Trampoline/Libraries/`.

1. In Finder, go to the folder listed above.
2. Copy `libiPhone-lib.a` and `libil2cpp.a` to `<repo_root>/Users/jlin/repos/Unity-Pinball/Platforms/iOS/Skillz Examples Pinball/Libraries` where `<repo_root>` is where you cloned this repo.
3. In XCode, navigate to the project's properties page, and select the `Build Phases` tab.
4. Under the `Link Binary With Libraries` drop-down, click the `+` sign and select the files from Step 2.

At this point, the XCode should compile successfully.