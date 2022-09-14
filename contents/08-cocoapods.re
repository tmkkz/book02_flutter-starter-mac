={08-cocoapods} CocoaPods
//abstract{
「CocoaPods」とは、Swift、Objective-Cプロジェクトの依存関係を管理してくれるものです。

Homebrewと同じように、SwiftやObjective-Cプロジェクトに必要なプログラムをインストールでき、
そのプログラムが依存するライブラリを自動的にインストールしてくれるものです。
//}

//makechaptitlepage[toc=on]
== CocoaPodsのインストール

　CocoaPodsは、プログラミング言語「Ruby」の依存関係を管理する「gem」を使ってインストールします。

#@# textlint-disable
//blankline
しかし、gemはRubyのバージョンに影響されます。macOS Montereyでのディフォルトは、「ruby-2.6.8」で、
最新版は「ruby-3.1.2」です。
#@# textlint-enable

//blankline
メジャーバージョンも異なるため、どんな影響がでるのか不明です（影響なしの場合もあります）。
これがバージョンの違いによる依存関係の問題です。

//blankline
それを避ける方法としては、依存関係を自動で解決してくれるHomebrewを使います。

=== gemでインストール

自分でトラブルを解決できる方は、gemを使ってインストールできます。

//terminal[][gemを使ってCocoaPodsをインストール]{
 > sudo gem update --system @<balloon>{gemをさいしんの状態にする}
 > sudo gem install cocoapods @<balloon>{CocoaPodsのインストール}
//}


//clearpage
=== Homebewでインストール

#@# textlint-disable
Homebrewを使ってインストールする場合は、ターミナルに「brew install cocoapods」と入力しエンターキーを押します。
#@# textlint-enable

//terminal[][HomebrewでCocoaPodsをインストール]{
  > brew install cocoapods
  Warning: Treating cocoapods as a formula. For the cask, use homebrew/cask/cocoapods
  ==> Downloading https://ghcr.io/v2/homebrew/core/ruby/manifests/3.1.2
  ######################################################################## 100.0%
  ==> Downloading https://ghcr.io/v2/homebrew/core/ruby/blobs/sha256:・・
  ==> Downloading from https://pkg-containers.githubusercontent.com/ghcr1/blobs/sha256・・
  ######################################################################## 100.0%
  ==> Downloading https://ghcr.io/v2/homebrew/core/cocoapods/manifests/1.11.3
  ######################################################################## 100.0%
  ==> Downloading https://ghcr.io/v2/homebrew/core/cocoapods/blobs/sha256・・
  ==> Downloading from https://pkg-containers.githubusercontent.com/ghcr1/blobs/sha256・・
  ######################################################################## 100.0%
  ==> Installing dependencies for cocoapods: ruby
  ==> Installing cocoapods dependency: ruby
  ==> Pouring ruby--3.1.2.arm64_monterey.bottle.tar.gz
  🍺  /opt/homebrew/Cellar/ruby/3.1.2: 15,996 files, 42.8MB
  ==> Installing cocoapods
  ==> Pouring cocoapods--1.11.3.arm64_monterey.bottle.tar.gz
  🍺  /opt/homebrew/Cellar/cocoapods/1.11.3: 13,496 files, 28.3MB
  ==> Running `brew cleanup cocoapods`...
  Disable this behaviour by setting HOMEBREW_NO_INSTALL_CLEANUP.
  Hide these hints with HOMEBREW_NO_ENV_HINTS (see `man brew`).
//}

//clearpage
== flutter doctorでの確認

CocoaPodsのインストールが完了しましたので、「flutter doctor -v」で確認します。

//terminal[][flutter doctor -vで確認]{
  > flutter doctor -v
  [✓] Flutter (Channel stable, 3.0.5, on macOS 12.5 21G72 darwin-arm, locale en-CA)
      • Flutter version 3.0.5 at /Users/ユーザー名8/.asdf/installs/flutter/3.0.5-stable
      • Upstream repository https://github.com/flutter/flutter.git
      • Framework revision f1875d570e (5 weeks ago), 2022-07-13 11:24:16 -0700
      • Engine revision e85ea0e79c
      • Dart version 2.17.6
      • DevTools version 2.12.2

  [✗] Android toolchain - develop for Android devices
      ✗ Unable to locate Android SDK.
      Install Android Studio from: https://developer.android.com/studio/index.html
      On first launch it will assist you in installing the Android SDK components.
      (or visit https://flutter.dev/docs/get-started/install/macos#android-setup for detailed instructions).
      If the Android SDK has been installed to a custom location, please use
      `flutter config --android-sdk` to update to that location.

  [✓] Xcode - develop for iOS and macOS (Xcode 13.4.1)
      • Xcode at /Applications/Xcode-13.4.1.app/Contents/Developer
      • CocoaPods version 1.11.3

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

  ! Doctor found issues in 2 categories.
//}

//clearpage
Xcodeの欄の問題が解決され、2つのカテゴリとなりました。

 1. Android toolchain
 2. Android studio

 の2点が問題として表示されています。

//blankline
 次に、Android Studioをインストールします。
