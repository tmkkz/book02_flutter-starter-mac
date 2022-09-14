= はじめに
//blankline
このたびは、「Flutter開発環境の作成-Mac版」を、手にしていただき誠にありがとうございます。

//image[0001][][scale=0.7, pos=H]
//blankline
本書で使用しているイラストは、

//image[aa_story_board][][scale=0.6]

にて作成しています。作者のtgk様、2chへAAを投稿された皆様へ感謝します。

//blankline
本書は、MacでのFlutter開発環境の作成を解説しています。
CPUがIntel、Apple Siliconのどちらでも問題ありません。
本書にてFlutterへ興味を持っていただけ、ひとりでもFlutter使いが増えることを願っています。

//blankline
もし、本書に間違い、誤字脱字がございましたら
@<href>{https://github.com/risingforce9zz/book02_flutter-dev-starter-mac, サポートサイト}にて
issueを作成していただけると助かります。
//image[0002][][scale=0.7, pos=H]

//blankline
=== モバイルアプリケーション
あなたが毎日使っているスマートフォンですが、アプリケーションがなければなにもできません。

//blankline
動画を観たり、

 * ゲームをしたり、
 * SNSで友人とつながったり、
 * 支払い

なども、すべてアプリケーションを使います。

//blankline
そのモバイルアプリケーション（以下アプリ）を無料で簡単に開発できるとしたら、いかがでしょうか？

//blankline
しかも、Android用、iPhone用とも、ひとつの開発環境で。

//blankline
その魔法のようなツールは、「Flutter」と言います。
Googleが2018年に正式版を発表したフリーでオープンソースな
クロスプラットフォームアプリケーションを開発できるSDK（Software Devlopment Kit）です。

//blankline
このFlutter開発環境を、あなたのPCに導入してみませんか？

//blankline
=== クロスプラットフォームとは？
それぞれのプラットフォームでアプリケーションを開発する場合には、ネイティブ言語と呼ばれる
プログラミング言語が使用されます。

: Andoroidアプリ
  JavaまたはKotolin
: iOSアプリ、Mac用デスクトップアプリ
  SwiftまたはObjectiveC
: Windowsデスクトップアプリ
  C++、C#
: Webアプリ
  HTML、CSS、JavaScript

//blankline
しかし、Flutterではプログラミング言語Dartを使うことで、
ひとつのソースコードから各プログラミング言語へ変換し、
それぞれのプラットフォームでアプリケーションをビルドできます。

//blankline
つまり、あなたはDartが使えるようになるだけで、Androidアプリ、
iOSアプリ（iPhone、iPad）、Windowsデスクトップアプリ、Macデスクトップアプリ、
Webアプリを開発できます。

//blankline
=== なぜ、クロスプラットフォーム開発が主流になるのか？
たとえば、iPhone用アプリを開発する方法としては、Macを使い、
Xcode（統合開発ツール）で、プログラミング言語ObjectivC、または、Swiftでコードを書きます。

//blankline
同じアプリをAndroid用としてリリースするには、Android Studio（統合開発ツール）やエディタを使い、
プログラミング言語Java、または、Kotolinでコードを書きます。

//blankline
エミュレータか実機（Android、iPhone）でデバッグを行い、機能の実装に問題がなければリリースします。

//blankline
同じアプリですが、ソースコードは別々に管理しなければなりません。
また、アップデート、修正もそれぞれのソースコードを変更しなければなりません。

//blankline
クロスプラットフォーム開発環境では、ひとつのソースコードから、
複数のプラットフォーム用のアプリケーションを開発できます。

//blankline
クロスプラットフォーム開発環境で使われているのは、

 * React Native -- JavaScript
 * Xamarin -- C# <--本書執筆中にXamarinのサポート終了が発表されました。
 * Flutter -- Dart

などがあります。

//blankline
=== なぜFlutterなのか？
Flutterでは作成したアプリケーションが、それぞれのネイティブ言語に変換されてから
ビルドされるので高いパフォーマンスと信頼性が得られます。

//blankline
Flutterを使えば、

 * Android StudioかVSCodeでプログラミング言語Dartで、
 * ひとつのソースコードで、Android、iOSのアプリケーションに対応

 できます。

//blankline
リリース時には、プロジェクトフォルダにFlutterから変換された、

: Andoroid、
  Andoroid Studio上でビルド
: iPhone、
  iOSフォルダ（objective-C、Kotlinの選択）をXcodeを使ってビルド
: Windows用、Mac用の各デスクトップ、Webアプリ
  それぞれのプラットフォーム上でFlutterコマンドでビルド

//blankline
驚くほど簡単にアプリが作成できますので、手持ちのPCに開発環境を作成しましょう。

//blankline
すべて無料で始めることができます。
