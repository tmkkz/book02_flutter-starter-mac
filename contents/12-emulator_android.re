={12-emulator_android} Androidエミュレータ
//abstract{
 Android OSで動作するスマートフォン・タブレットは、毎年たくさんの製品がリリースされます。
 それらは画面サイズが違います。

 また、Android OSも毎年アップデートされます。しかし、すべての端末機のOSがアップデートされるわけではありません。

 そのため、動作確認は、すべてのAndroid OSで動作を確認し、すべての画面解像度でUIのチェックを行うべきですが、
 すべてを実機で検証するのは不可能でしょう。

 しかし、仕様（OSのバージョン、画面解像度）に即して、できる限りの端末機でチェックできるように、エミュレータ（疑似端末）を使いテストします。

//}


== Android Platform

Android OSがエミュレータで実行できるように、各プラットフォームのSDKやimageをダウンロードします。
Andoroid Studioで右上のアイコンをクリックしてSDKマネージャーを開きます。

//image[sdkmng01][desc][scale=0.7]

ダウンロードするものは、

: Android SDK Platform
  各バージョン用にアプリをコンパイルするために必要
: System Image
  Androidエミュレータ上で実行するために必要
: Sources for Android
  プラットフォームのソースファイルがふくまれています。

//blankline
各AndroidのバージョンとAPIレベルは、以下の通りです。

: Android 13
  コードネーム:Tiramisu APIレベル:33 リリース日:2022/8/15
: Android 12、12L
  コードネーム: S APIレベル:31　リリース日:2021/10/4 @<br>{}
  コードネーム: Sv2 APIレベル:32　リリース日:2022/3/7
: Android 11
  コードネーム: R APIレベル:30　リリース日:2020/9/8
: Android 10
  コードネーム: Q APIレベル:29　リリース日:2019/9/3

//note[ChipがIntelかApple SiliconかでダウンロードするImageが違います。]{
 エミュレータを動作させる、リリース用バイナリを作成するPCに搭載されているChipに合わせてダウンロードします。
//}

//image[sdkmng02][desc][scale=0.7]

== エミュレータの作成

エミュレータを作成するために、 Android Studioの右上のデバイスマネージャーのアイコン、または、右橫にある
デバイスマネージャータブをクリックします。

//image[emulator01][デバイスマネージャーを開く][scale=0.7]

//blankline
デフォルトで作成されているエミュレータを削除します。一番右の下向き矢印をクリックし、「Delete」を選択します。
//image[emulator01-1][デフォルトのエミュレータを削除][scale=0.7]

//blankline
「Create device」ボタンをクリックします。
//image[emulator01-2][新規エミュレータの作成][scale=0.7]

//blankline
新規デバイス作成画面が開きます。適当なデバイスを選択してください。今回は、Pixel5を選択しました。
「Next」ボタンをクリックします。
//image[emulator02][デバイスマネージャーを開く][scale=0.7]

//blankline
デバイスに使用するイメージを選択します。

Pixel5の販売時の仕様は、

 * Android 11 -> APIレベル30
 * 6.0inch フルスクリーン 1,080 x 2,340
 * 8GBメモリ、128GBストレージ

のため、APIレベル30を選択しています。「Next」ボタンをクリックします。
//image[emulator03][APIレベルの選択][scale=0.7]

//blankline
確認画面になりますが、「Show Advanced Settings」ボタンをクリックします。
//image[emulator04][設定を変更する][scale=0.7]

//blankline
メモリ、ストレージを4GBに増やします。エミュレータの動作速度、ホストPCのスペックなどのトレードオフがありますので
自由に決めてください。

//blankline
「Finish」ボタンをクリックします。
//image[emulator05][メモリ、ストレージを増やす][scale=0.7]

//blankline
デバイスマネージャーに作成したエミュレータが表示されます。右向き三角アイコンで実行します。
//image[emulator06][エミュレータを起動][scale=0.7]

//blankline
エミュレータウィンドウでエミュレータが起動します。歯車アイコンをクリックし、「View Mode」>「Float」を
選択すると、エミュレータウィンドウを自由に移動させることができます。
//image[emulator07][エミュレータウィンドウをFloatViewで][scale=0.7]

//blankline
エミュレータは、作成された時点では英語となっていますので日本語化します。マウスで下から上にフリックします。
//image[emulator08][エミュレータを日本語化][scale=0.7]

//blankline
「Settings」を選択します。
//image[emulator09][設定アプリを選択][scale=0.7]

//blankline
「System」を選択します。
//image[emulator10][設定からシステムを選択][scale=0.7]

//blankline
「Languages&input」を選択します。
//image[emulator11][言語と入力を選択][scale=0.7]

//blankline
「Languages」を選択します。
//image[emulator12][言語を選択][scale=0.7]

//blankline
「Add a language」を選択します。
//image[emulator13][言語を追加を選択][scale=0.7]

//blankline
「日本語」を選択します。
//image[emulator14][日本語を選択][scale=0.7]

//blankline
追加された「日本語」を「English」の上に移動させます。
//image[emulator15][日本語を優先][scale=0.7]

//blankline
日本語化できました。
//image[emulator16][日本語化完了][scale=0.7]
