={09-androidstudio} Android aStudio

//abstract{
  Android Studioは、JetbarainsのIDEをGoogleがAndroidアプリ開発用に提供しています。

  Andoroid SDKのバージョン毎のインストールやAndroid Emulatorの作成などができ、devToolsなども
含まれていますので、Androidアプリ開発では必須といえます。
//}

//makechaptitlepage[toc=on]

== Android Studioのインストール

Android Studioのインストールは、
@<href>{https://developer.android.com/studio, Android Studio}サイトからインストーラをダウンロードできます。

//image[androidStudio01][Android Studioのサイト][scale=0.9, pos=H]

「Download Android Studio」ボタンをクリックすると「ライセンス許諾」が開きます。下までスクロールし
「同意する」チェックボックスにチェックをします。自分のMacのチップに合わせ「Intel chip」、「Apple chip」の
ボタンをクリックするとダウロードが開始します。

//image[androidStudio01-1][ライセンス許諾][scale=0.7, pos=H]

//blankline
#@# textlint-disable
ダウンロードした「android-studio-2021.2.1.16-mac_arm.dmg」を開きます。
#@# textlint-enable

//image[androidStudio02][ダウンロードしたパッケージを開く][scale=0.7, pos=H]

== Android Studioのセットアップ

Launchpadなどからインストールした「Android Studio」を開きます。

//blankline
初回はセットアップ画面が起動します。最初に「使用状況をGoogleに送る」かを聞かれます。

//image[androidStudio03][Android Stuidoセットアップ][scale=0.7, pos=H]

//blankline
ここからセットアップの開始です。
//image[androidStudio04][Android Stuidoセットアップ][scale=0.7, pos=H]


インストールタイプ「スタンダード」、「カスタム」の選択があります。
//image[androidStudio05][Android Stuidoセットアップ][scale=0.7, pos=H]

テーマの選択です。「ダーク」「ライト」がありますが、あとからでも変更できます。
//image[androidStudio06][Android Stuidoセットアップ][scale=0.7, pos=H]

//clearpage
確認画面になります。
//image[androidStudio07][Android Stuidoセットアップ][scale=0.7, pos=H]

//blankline
「Andoloid-SDK-Licence」、「Android-SDK-arm-dbt-license」の確認画面です。
赤ワクを選択し、それぞれ「Accept」を選択すると「Next」ボタンが有効になります。
//image[androidStudio08][Android Stuidoセットアップ][scale=0.7, pos=H]

//clearpage
必要なものがダウンロードされます。
//image[androidStudio09][Android Stuidoセットアップ][scale=0.7, pos=H]

//blankline
セットアップ完了です。
//image[androidStudio10][Android Stuidoセットアップ][scale=0.7, pos=H]


== flutter doctorの確認

Android studioのインストールが完了しましたので、「flutter doctor -v」で確認します。

//terminal[][flutter doctort -v]{
  > flutter doctor -v
  [✓] Flutter (Channel stable, 3.0.5, on macOS 12.5 21G72 darwin-arm, locale en-CA)
      • Flutter version 3.0.5 at /Users/ユーザー名/.asdf/installs/flutter/3.0.5-stable
      • Upstream repository [https://github.com/flutter/flutter.git](https://github.com/flutter/flutter.git)
      • Framework revision f1875d570e (5 weeks ago), 2022-07-13 11:24:16 -0700
      • Engine revision e85ea0e79c
      • Dart version 2.17.6
      • DevTools version 2.12.2

  [!] Android toolchain - develop for Android devices (Android SDK version 33.0.0)
      • Android SDK at /Users/ユーザー名/Library/Android/sdk
      x cmdline-tools component is missing
      Run `path/to/sdkmanager --install "cmdline-tools;latest"`
      See [https://developer.android.com/studio/command-line](https://developer.android.com/studio/command-line) for more details.
      x Android license status unknown.
      Run `flutter doctor --android-licenses` to accept the SDK licenses.
      See [https://flutter.dev/docs/get-started/install/macos#android-setup](https://flutter.dev/docs/get-started/install/macos#android-setup) for more details.

  [✓] Xcode - develop for iOS and macOS (Xcode 13.4.1)
      • Xcode at /Applications/Xcode-13.4.1.app/Contents/Developer
      • CocoaPods version 1.11.3

  [✓] Chrome - develop for the web
      • Chrome at /Applications/Google Chrome.app/Contents/MacOS/Google Chrome

  [✓] Android Studio (version 2021.2)
      • Android Studio at /Applications/Android Studio.app/Contents
      • Flutter plugin can be installed from:
      - [https://plugins.jetbrains.com/plugin/9212-flutter](https://plugins.jetbrains.com/plugin/9212-flutter)
      • Dart plugin can be installed from:
      - [https://plugins.jetbrains.com/plugin/6351-dart](https://plugins.jetbrains.com/plugin/6351-dart)
      • Java version OpenJDK Runtime Environment (build 11.0.12+0-b1504.28-7817840)

  [✓] VS Code (version 1.70.1)
      • VS Code at /Applications/Visual Studio Code.app/Contents
      • Flutter extension version 3.46.0

  [✓] Connected device (2 available)
      • macOS (desktop) • macos  • darwin-arm64   • macOS 12.5 21G72 darwin-arm
      • Chrome (web)    • chrome • web-javascript • Google Chrome 104.0.5112.79

  [✓] HTTP Host Availability
      • All required HTTP hosts are available

  ! Doctor found issues in 1 category.
//}

Android Studio欄の問題が解消されました。残りは、

 1. Android toolchainでのcmdline-toolsがない。
 2. Androidのライセンス状況が不明

と、2つ残されています。

//blankline
それでは、「cmdline-tools」をインストールします。
