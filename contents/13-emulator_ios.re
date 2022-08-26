={13-emulator_ios} iPhoneエミュレータ
//abstract{
  iOS用のデバイスも毎年リリースされ、複数の画面サイズが当たり前になりました。

  これらもすべて実機でテストできれば良いのですが、仕様の範囲内でエミュレータを使って
動作確認、デザイン確認を行います。
//}

== iOSエミュレータ

　iOSエミュレータは、Xcodeに含まれています。ターミナルに「open -a Simulator.app」を入力しエンターキーを押します。

//terminal[][iOSエミュレータの起動]{
 > open -a Simulator
//}

//blankline
コマンドが実行されると、エミュレータ（iOSではシミレータ？でも、本書ではエミュレータで統一します。）が起動します。
DockにあるエミュレータアイコンをOptionで「Dockに追加」を行えば、次回からはワン・クリックで起動できます。
//image[iosEmu01][iOSエミュレータ][scale=0.5]

//blankline
機種の切替は、メニューの「File」>「Open Simulator」>「iOS XX.X」>機種名で選択します。
//image[iosEmu02][iOSエミュレータの機種変更][scale=0.7]

== 以前のiOSバージョンの機種を作成

//blankline
Xcodeは、ダウンロードした時点での最新のiOSしか持っていません。旧バージョンのエミュレータを作成したい場合は、Xcodeを起動し
「Window」>「Devices and Simulators」を選択します。
//image[iosEmu03][iOSエミュレータの旧バージョン機種作成][scale=0.7]

//blankline
エミュレータウィンドウが開きますので、下の「+」をクリックします。
//image[iosEmu04][iOSエミュレータウィンドウ][scale=0.7]

//blankline
エミュレータの新規作成ウィンドウが開きますので、「Simuraltor Name」に作成する機種名を入力します。
//image[iosEmu05][新規iOSエミュレータの作成][scale=0.7]

//blankline
「Device Type」のドロップダウンリストから作成する機種を選択します。
//image[iosEmu06][新規iOSエミュレータのデバイスタイプ][scale=0.7]

//blankline
使用したいiOSのバージョンがない場合には、「Download more simulator runtimes」をクリックします。
//image[iosEmu07][新規iOSエミュレータでのOSのバージョン選択][scale=0.7]

//blankline
Componentsウィンドウが開きます。使用したいiOS Simulator左のアイコンをクリックするとダウンロードが開始されます。
//image[iosEmu08][iOS旧バージョンダウンロード][scale=0.7]

//blankline
ダウンロードは、結構時間がかかります。
//image[iosEmu09][旧バージョンダウンロード中][scale=0.7]

//blankline
ダウンロードが完了すると、機種が作成されています。
//image[iosEmu10][旧バージョンでの機種作成完了][scale=0.7]

//blankline
ダウンロードした旧バージョンは、次回からは選択できます。
//image[iosEmu11][iOSバージョンを指定しての機種作成][scale=0.7]
