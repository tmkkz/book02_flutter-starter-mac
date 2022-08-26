={10-commandlinetools} command-line toolsのインストール
== cmdline-toolsのインストール

Android Studioを起動しますと初期画面が開きます。

//image[androidStudio11][cmdlint-toolsのインストール][scale=0.7]

//blankline
中央にある「More Actions」をクリックし、「SDK-Manager」を選択します。
//image[androidStudio12][cmdlint-toolsのインストール][scale=0.7]

//blankline
右下の「OK」ボタンの上に「Show Package Details」チェックボックスがありますので、チェックします。
「Android SDK Command-line Toools」の欄をクリックすると、インストール可能な「cmdline-tools」の
バージョンが表示されます。一番上の（latest）をチェックし、右下の「OK」ボタンをクリックするとインストールされます。
//image[androidStudio13][cmdlint-toolsのインストール][scale=0.7]

//blankline
cmdline-toolsのインストールが完了しましたら、パスを通します。「.zshrc」に以下を追加し、再読み込みします。

//list[][.zshrcへcmdline-toolsのパスを通す]{
  # Android
  export ANDROID_HOME=$HOME/Library/Android/sdk
  export PATH="$ANDROID_HOME/platform-tools:$ANDROID_HOME/emulator:$PATH"
  export PATH="$ANDROID_HOME/cmdline-tools/latest/bin:$PATH"
//}


//terminal[][.zshrcの再読み込み]{
 > source ~/.zshrc
//}


「flutter doctor -v」で確認します。

//terminal[][flutter doctor -v]{
  ❯ flutter doctor -v
  [✓] Flutter (Channel stable, 3.0.5, on macOS 12.5 21G72 darwin-arm, locale en-CA)
      • Flutter version 3.0.5 at /Users/ユーザー名/.asdf/installs/flutter/3.0.5-stable
      • Upstream repository [https://github.com/flutter/flutter.git](https://github.com/flutter/flutter.git)
      • Framework revision f1875d570e (5 weeks ago), 2022-07-13 11:24:16 -0700
      • Engine revision e85ea0e79c
      • Dart version 2.17.6
      • DevTools version 2.12.2

  [!] Android toolchain - develop for Android devices (Android SDK version 33.0.0)
      • Android SDK at /Users/ユーザー名/Library/Android/sdk
      • Platform android-33, build-tools 33.0.0
      • ANDROID_SDK_ROOT = /Users/ユーザー名/Library/Android/sdk
      • Java binary at: /Applications/Android Studio.app/Contents/jre/Contents/Home/bin/java
      • Java version OpenJDK Runtime Environment (build 11.0.12+0-b1504.28-7817840)
      ! Some Android licenses not accepted.  To resolve this, run: flutter doctor --android-licenses

  [✓] Xcode - develop for iOS and macOS (Xcode 13.4.1)
      • Xcode at /Applications/Xcode-13.4.1.app/Contents/Developer
      • CocoaPods version 1.11.3

  [✓] Chrome - develop for the web
      • Chrome at /Applications/Google Chrome.app/Contents/MacOS/Google Chrome

  [✓] Android Studio (version 2021.2)
      • Android Studio at /Applications/Android Studio.app/Contents
      • Flutter plugin can be installed from:
      🔨 [https://plugins.jetbrains.com/plugin/9212-flutter](https://plugins.jetbrains.com/plugin/9212-flutter)
      • Dart plugin can be installed from:
      🔨 [https://plugins.jetbrains.com/plugin/6351-dart](https://plugins.jetbrains.com/plugin/6351-dart)
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

あとひとつ、Androidのライセンスに関しての問題が解消されていません。


== Androidライセンス

#@# textlint-disable
「flutter doctor -v」で表示された通りターミナルに「flutter doctor --android-licenses」と入力しエンターキーを押します。
#@# textlint-enable

//blankline
ライセンス許諾条項が表示されます。「accepted（y/N）」と聞かれますので、「ｙ」を押します。
すべてのライセンス許諾に「y」と対応して完了です。

//terminal[][Androidライセンス]{
 > flutter doctor --android-licenses
 accepted (y/N)?
//}

完了しましたら、再び「flutter doctor -v」で確認します。

//terminal[][flutter doctor -v]{
  ❯ flutter doctor -v
  [✓] Flutter (Channel stable, 3.0.5, on macOS 12.5 21G72 darwin-arm, locale en-CA)
      • Flutter version 3.0.5 at /Users/ユーザー名/.asdf/installs/flutter/3.0.5-stable
      • Upstream repository [https://github.com/flutter/flutter.git](https://github.com/flutter/flutter.git)
      • Framework revision f1875d570e (5 weeks ago), 2022-07-13 11:24:16 -0700
      • Engine revision e85ea0e79c
      • Dart version 2.17.6
      • DevTools version 2.12.2

  [✓] Android toolchain - develop for Android devices (Android SDK version 33.0.0)
      • Android SDK at /Users/ユーザー名/Library/Android/sdk
      • Platform android-33, build-tools 33.0.0
      • ANDROID_SDK_ROOT = /Users/ユーザー名/Library/Android/sdk
      • Java binary at: /Applications/Android Studio.app/Contents/jre/Contents/Home/bin/java
      • Java version OpenJDK Runtime Environment (build 11.0.12+0-b1504.28-7817840)
      • All Android licenses accepted.

  [✓] Xcode - develop for iOS and macOS (Xcode 13.4.1)
      • Xcode at /Applications/Xcode-13.4.1.app/Contents/Developer
      • CocoaPods version 1.11.3

  [✓] Chrome - develop for the web
      • Chrome at /Applications/Google Chrome.app/Contents/MacOS/Google Chrome

  [✓] Android Studio (version 2021.2)
      • Android Studio at /Applications/Android Studio.app/Contents
      • Flutter plugin can be installed from:
      🔨 [https://plugins.jetbrains.com/plugin/9212-flutter](https://plugins.jetbrains.com/plugin/9212-flutter)
      • Dart plugin can be installed from:
      🔨 [https://plugins.jetbrains.com/plugin/6351-dart](https://plugins.jetbrains.com/plugin/6351-dart)
      • Java version OpenJDK Runtime Environment (build 11.0.12+0-b1504.28-7817840)

  [✓] VS Code (version 1.70.1)
      • VS Code at /Applications/Visual Studio Code.app/Contents
      • Flutter extension version 3.46.0

  [✓] Connected device (2 available)
      • macOS (desktop) • macos  • darwin-arm64   • macOS 12.5 21G72 darwin-arm
      • Chrome (web)    • chrome • web-javascript • Google Chrome 104.0.5112.79

  [✓] HTTP Host Availability
      • All required HTTP hosts are available

  - No issues found!
//}

　これで問題は、すべて解消されました。

　次に、上記の「Android Studio」欄にある、

 * Flutter plugin can be installed from …
 * Dart plugin can be installed from …

とありますので、Android Studioに2つのプラグインをインストールします。


== Android Studioへのプラグインのインストール

Android Stuidoを起動し、初期画面の左ペインにある「plugin」をクリックします。
検索欄に、「Flutter」、「Dart」と入力し検索します。

//blankline
表示されたプラグインの「Install」ボタンをクリックします。
//image[androidStudio14][Flutterプラグインのインストール][scale=0.7]

//blankline
すべてのプラグインをインストールが完了すると、Android Studioを再起動します。
//image[androidStudio14-1][Dartプラグインのインストール][scale=0.7]


以上で、Flutter開発環境の作成が完了しました。

//blankline
スタートアッププロジェクトを作成してみましょう。
