={06-xcodes} Xcodeのインストール
//abstract{
  XcodeはAppleが提供するシステム統合開発環境です。統合開発環境もFlutterなどのフレームワークやプログラミング言語と同じように
  macOSと伴にバージョンアップされます。

  Xcodeも同じようにバージョン管理の対象にし、「Xcodes」と言うツールを使い、複数のバージョンを切り替えることができるようにします。
//}

//image[xcode7][Xcodeのバージョン管理ツール][scale=0.2]

Xcodesとは、複数のXcodeバージョンをインストールでき、それを簡単に切り替えることができるツールです。
ダウンロードも独自で行うため、Apple Storeからダウンロードするよりも断然早くダウンロードできます。

//image[xcode2][Xcodes][scale=0.7]


== Xcodesのインストール
Apple App Storeからインストールされる方は、ここはスキップしてください。


#@# textlint-disable
XcodesはHomebrewからインストールします。ターミナルに「brew install --cask xcodes」と入力しエンターキーを押します。
#@# textlint-enable
//terminal[][Xcodesのインストール]{
 > brew install --cask xcodes
//}

== Xcodeのインストール
=== Xcodesを使用する場合
//blankline
インストールが完了しましたら、Launchpadなどから起動します。通常のGUIアプリケーションですのでApplicationフォルダにインストールされています。

//image[xcode3][Xcodesを起動][scale=0.7]

インストール可能なバージョンが表示されますので、インストールするバージョンの右側の「INSTALL」ボタンをクリックします。
ダウンロードが完了しましたら、「INSTALL」ボタンが「OPEN」ボタンに変わります。

//image[xcode4][Xcodeのインストール完了][scale=0.7]

インストール先は、「/Applicationフォルダ」にバージョン付きの名前です。

「Open」ボタンの左にある「チェックマーク」をクリックすると、対象のバージョンがアクティブになります。
アクティブにすると、Xcodeインストール後に行う以下のコマンドが自動で実行されます。

//image[xcode5][][scale=0.7]

このコマンドは、Xcodesで選択したバージョンをアクティブにすると自動で実行されます。
//terminal[][Xcodeインストール後に必要なコマンド]{
 > sudo xcode-select --switch /Applications/XCode+バージョン.app/Contents/developer
 > sudo xcodebuild -runFirstLaunch
//}

//blankline
現在のXcodeのバージョンの確認は、以下のコマンドで行います。

//terminal[][Xcodeバージョン確認]{
  ❯ xcodebuild -version
  Xcode 14.0
  Build version 14A5294g
  ❯ xcodebuild -version
  Xcode 13.4.1
  Build version 13F100
//}

=== Apple App Storeからインストールする場合

Lounchpadから「App Store」を起動します。

//image[xcode][Mac App Store][scale=0.7]

「入手」、「インストール」をクリックしてインストールします。Xcodeは13GB近くありますので時間がかかります。

以上で、Xcodeのインストールが完了しました。
