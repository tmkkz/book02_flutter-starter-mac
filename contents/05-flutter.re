={05-flutter} Flutterのインストール

//abstract{
  Flutterの最新版をインストールし、PC全体で最新版を使えるようにします。

  また、2.x系の最新版もインストールし、バージョンを切り替えて使えることを確認します。
//}


Flutterは、バージョンの切替ができるようにasdf経由でインストールします。先ほどインストール可能なバージョンを
確認したところ最新版は「3.0.5-stable」でしたので、このバージョンを指定してインストールします。

//blankline

#@# textlint-disable
ターミナルに「asdf install flutter インストールしたいバージョン」を入力しエンターキーを押します。
#@# textlint-enable

//terminal[][Flutterのインストール]{
 > asdf install flutter 3.0.5-stable
 /Users/ユーザー名/.asdf/plugins/flutter/bin/install: line 25: jq: command not found
 /Users/ユーザー名/.asdf/plugins/flutter/bin/install: line 26: jq: command not found
 /Users/ユーザー名/.asdf/plugins/flutter/bin/install: line 27: [: -gt: unary operator expected
 Cannot find the download url for the version: 3.0.5-stable
//}

//blankline
「jq: command not found」と表示されエラーとなりました。

//blankline
「jq」は何かを調べると、「Lightweight and flexible command-line JSON processor」とあり、
インストール先のシステムが「intel chip」、「Apple Silicon」で処理を分ける処理で使われていました。

//blankline
「jq」はHomebrewでインストールできます。ターミナルに「brew intall jq」と入力しエンターキーを押します。

//terminal[][jqのインストール]{
 > brew install jq
//}

//blankline
jqのインストールが完了しましたら、再度Flutter最新版のインストールを行います。

//terminal[][Flutter最新版のインストール]{
 > asdf install flutter 3.0.5-stable
% Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
Dload  Upload   Total   Spent    Left  Speed
100 1188M  100 1188M    0     0  38.7M      0  0:00:30  0:00:30 --:--:-- 41.1M
//}

最新版（3.0.5-stable）のインストールが完了しました。インストール完了の確認のため、インストールしたバージョンを確認します。

//blankline
ターミナルに「flutter --version」と入力しエンターキーを押します。

//terminal[][Flutterバージョンの確認]{
 > flutter --version
 No version is set for command flutter
 Consider adding one of the following versions in your config file at
 flutter 3.0.5-stable
//}

//blankline
設定ファイルに「flutter 3.0.5-stable」を追加しなさい。と怒られました。

//blankline
2.x系の最新版もインストールします。

//terminal[][Flutter 2.x系のインストール]{
 > asdf install flutter 2.10.5-stable
 % Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
 Dload  Upload   Total   Spent    Left  Speed
 100 1126M  100 1126M    0     0  30.3M      0  0:00:37  0:00:37 --:--:-- 28.7M
//}

//blankline
同じくバージョンを確認してみます。

//terminal[][Flutterバージョンの確認]{
 > flutter --version
 No version is set for command flutter
 Consider adding one of the following versions in your config file at
 flutter 3.0.5-stable
 flutter 2.10.5-stable
//}

//blankline
今回も設定ファイルにバージョンを追加しなさいと怒られました。

//blankline
PC全体で最新版が使えるように設定します。

ターミナルに「asdf global flutter 3.0.5-stable」と入力しエンターキーを押します。その後、バージョン確認も行います。

//terminal[][asdfで使用するFlutterバージョンの指定]{
 > asdf global flutter 3.0.5-stable
 > flutter --version
 Flutter 3.0.5 • channel stable • https://github.com/flutter/flutter.git
 Framework • revision f1875d570e (4 weeks ago) • 2022-07-13 11:24:16 -0700
 Engine • revision e85ea0e79c
 Tools • Dart 2.17.6 • DevTools 2.12.2

 ╔════════════════════════════════════════════════════════════════════════════╗
 ║                 Welcome to Flutter! - https://flutter.dev                  ║
 ║                                                                            ║
 ║ The Flutter tool uses Google Analytics to anonymously report feature usage ║
 ║ statistics and basic crash reports. This data is used to help improve      ║
 ║ Flutter tools over time.                                                   ║
 ║                                                                            ║
 ║ Flutter tool analytics are not sent on the very first run. To disable      ║
 ║ reporting, type 'flutter config --no-analytics'. To display the current    ║
 ║ setting, type 'flutter config'. If you opt out of analytics, an opt-out    ║
 ║ event will be sent, and then no further information will be sent by the    ║
 ║ Flutter tool.                                                              ║
 ║                                                                            ║
 ║ By downloading the Flutter SDK, you agree to the Google Terms of Service.  ║
 ║ Note: The Google Privacy Policy describes how data is handled in this      ║
 ║ service.                                                                   ║
 ║                                                                            ║
 ║ Moreover, Flutter includes the Dart SDK, which may send usage metrics and  ║
 ║ crash reports to Google.                                                   ║
 ║                                                                            ║
 ║ Read about data we send with crash reports:                                ║
 ║ https://flutter.dev/docs/reference/crash-reporting                         ║
 ║                                                                            ║
 ║ See Google's privacy policy:                                               ║
 ║ https://policies.google.com/privacy                                        ║
 ╚════════════════════════════════════════════════════════════════════════════╝
//}

asdfコマンドで「global」指定をしたので、PCのどのフォルダでも「3.0.5-stable」が使われます。
プロジェクト毎に別なバージョンを使い対場合には、
「global」の代わりにプロジェクトフォルダへ移動し「asdf local flutter使用するバージョン」を
ターミナルに入力しエンターキーを押します。

//blankline
全体を「2.10.5-stable」に切り替えて確認します。

//terminal[][Flutter 2.10.5-stableへ切替]{
 > asdf local flutter 2.10.5-stable

 > flutter --version @<balloon>{バージョン確認}
╔════════════════════════════════════════════════════════════════════════════╗
║ A new version of Flutter is available!                                     ║
║                                                                            ║
║ To update to the latest version, run "flutter upgrade".                    ║
╚════════════════════════════════════════════════════════════════════════════╝


Flutter 2.10.5 • channel stable • https://github.com/flutter/flutter.git
Framework • revision 5464c5bac7 (4 months ago) • 2022-04-18 09:55:37 -0700
Engine • revision 57d3bac3dd
Tools • Dart 2.16.2 • DevTools 2.9.2
//}

//blankline
バージョンが「2.10.5」と表示され、新しいバージョンがあることも表示しています。

//blankline
最新版を使うよう戻します。

//terminal[][Flutterバージョン切り替え]{
 > asdf global flutter 3.0.5-stable
 > flutter --version
 Flutter 3.0.5 • channel stable • https://github.com/flutter/flutter.git
 Framework • revision f1875d570e (6 weeks ago) • 2022-07-13 11:24:16 -0700
 Engine • revision e85ea0e79c
 Tools • Dart 2.17.6 • DevTools 2.12.2
//}

//blankline
Flutterのインストールが完了しました。開発環境を整えるには「flutter doctor -v」を実行し不足しているものをインストールしていきます。

//terminal[][flutter doctor -v]{
 > flutter doctor -v
 Running "flutter pub get" in flutter_tools...                       5.1s
 [✓] Flutter (Channel stable, 3.0.5, on macOS 12.5 21G72 darwin-arm, locale en-CA)
     • Flutter version 3.0.5 at /Users/kazuyainaba/.asdf/installs/flutter/3.0.5-stable
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

 [✗] Xcode - develop for iOS and macOS
     ✗ Xcode installation is incomplete; a full installation is necessary for iOS development.
     Download at: https://developer.apple.com/xcode/download/
     Or install Xcode via the App Store.
     Once installed, run:
     sudo xcode-select --switch /Applications/Xcode.app/Contents/Developer
     sudo xcodebuild -runFirstLaunch
     ✗ CocoaPods not installed.
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

//blankline
現時点では、3つのカテゴリに問題があると表示されています。内容は、バツが付いているものです。

 1. Android toolchain
 2. Xcode
 3. Android studio

 となっています。

 これを、順番に解決すればFlutter開発環境の作成が完了となります。
