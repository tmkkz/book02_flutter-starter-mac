={07-xcode} Xcodeのインストール後の確認
//abstract{
  Xcodeをインストールしましたので、再度、「flutter doctor -v」で確認します。
//}

//makechaptitlepage[toc=on]

== Flutter開発環境の分析

ターミナルに「flutter doctor -v」と入力しエンターキーを押します。
//terminal[][Xcodeインストール後のflutter doctorの結果]{
  > flutter doctor -v
  [✓] Flutter (Channel stable, 3.0.5, on macOS 12.5 21G72 darwin-arm, locale en-CA)
      • Flutter version 3.0.5 at /Users/ユーザー名/.asdf/installs/flutter/3.0.5-stable
      • Upstream repository https://github.com/flutter/flutter.git
      • Framework revision f1875d570e (5 weeks ago), 2022-07-13 11:24:16 -0700
      • Engine revision e85ea0e79c
      • Dart version 2.17.6
      • DevTools version 2.12.2

  [x] Android toolchain - develop for Android devices
      x Unable to locate Android SDK.
      Install Android Studio from: https://developer.android.com/studio/index.html
      On first launch it will assist you in installing the Android SDK components.
      (or visit https://flutter.dev/docs/get-started/install/macos#android-setup for detailed instructions).
      If the Android SDK has been installed to a custom location, please use
      `flutter config --android-sdk` to update to that location.

  [!] Xcode - develop for iOS and macOS (Xcode 13.4.1)
      • Xcode at /Applications/Xcode-13.4.1.app/Contents/Developer
      x CocoaPods not installed.
      CocoaPods is used to retrieve the iOS and macOS platform side's plugin code that responds to your plugin usage on the Dart side.
      Without CocoaPods, plugins will not work on iOS or macOS.
      For more info, see https://flutter.dev/platform-plugins
      To install see https://guides.cocoapods.org/using/getting-started.html#installation for instructions.

  [✓] Chrome - develop for the web
      • Chrome at /Applications/Google Chrome.app/Contents/MacOS/Google Chrome

  [!] Android Studio (not installed)
      • Android Studio not found; download from https://developer.android.com/studio/index.html
      (or visit https://flutter.dev/docs/get-started/install/macos#android-setup for detailed instructions).

  [✓] Connected device (2 available)
      • macOS (desktop) • macos  • darwin-arm64   • macOS 12.5 21G72 darwin-arm
      • Chrome (web)    • chrome • web-javascript • Google Chrome 104.0.5112.79

  [✓] HTTP Host Availability
      • All required HTTP hosts are available

  ! Doctor found issues in 3 categories.
//}

//clearpage
Xcodeの問題はなくなりましたが、

 1. CocoaPodsがインストールされていない。
 2. Android toolchain
 3. Android studio

 と問題が3カテゴリにあると表示されています。
//blankline
 次に、「CocoaPods」をインストールします。
