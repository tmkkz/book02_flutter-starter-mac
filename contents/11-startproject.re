={11-startproject} プロジェクトのスタート
//abstract{
  Android Studioでスタートアッププロジェクトを作成します。

  ウィザードに沿って作成するだけで、あっと言う間にモバイルアプリができあがります。
//}
//makechaptitlepage[toc=on]
== スタートアッププロジェクトを作る

Android Studioを起動します。Flutterプラグインをインストールしましたので、「New Flutter Project」を
選択できるようになっています。
//image[androidStudio15][][scale=0.7, pos=H]

「New Flutter Project」をクリックすると、「flutter SDK path」を入力、または選択します。

//image[androidStudio16][][scale=0.7, pos=H]


asdfを使用してFlutterをインストールした場合には、ユーザーホーム（/Users/ユーザー名/.asdf）以下のフォルダにあります。
//image[asdf02][Flutter SDKのインストール場所][scale=0.7, pos=H]

//clearpage
プロジェクトに関する情報を入力します。

#@# textlint-disable
 * Project name: プロジェクトの名前（flutterは原則単語をアンダースコアでつなぐ）
 * Project location: プロジェクト保存先
 * Description: プロジェクトの詳細
 * Project type: Application/Plugin/Package/Moduleの選択があります。
 * Organization: Apple Developperに登録したIdentifire
 * Android language: Android用に使用するプログラミング言語 Java/Kotlin
 * iOS language: iOS用に使用するプログラミング言語 Objective-C/Swift
 * Publication: 出力するプラットフォーム　Android/iOS/Linux/MacOS/Web/Windows
#@# textlint-enable
  以上の入力が完了しましたら、「Finish」ボタンをクリックします。

//image[androidStudio17][desc][scale=0.7, pos=H]

//clearpage
flutterコマンドが実行され、スタートアッププロジェクトが作成されます。後は、魔改造するだけです。
//image[androidStudio18][desc][scale=0.7, pos=H]

次に、作成されたプロジェクトをエミュレータで動かしてみましょう。
