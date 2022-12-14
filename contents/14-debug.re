={14-debug} エミュレータでデバッグ
//abstract{
  それでは、エミュレータを使ってスタートアッププロジェクトを動かしてみましょう。
//blankline
  実機やエミュレータを使い、動作確認し不具合を見つけて修正することをデバッグと言います。
  ボタンクリックひとつで簡単に開始できます。
//}
//makechaptitlepage[toc=on]
== Androidエミュレータ

デバイスマネージャーからエミュレータを起動します。

//blankline
Android Studioの右上にあるエミュレータから対象を選択し、右向き三角のアイコンをクリックします。

//image[debug01][Androidエミュレータでデバッグ開始][scale=0.9, pos=H]

//clearpage
プログラムの解析が行われ、エラーがない場合にはプログラムがスタートします。エミュレータに表示された
「+」ボタンをクリックすると表示されている数字が増えていきます。

//image[debug02][Androidエミュレータでデバッグ中][scale=0.9, pos=H]

//blankline
デバッグの終了は、先ほどデバッグ開始時にクリックした右向き三角付近の「赤い四角」アイコンをクリックします。

//clearpage

== iPhoneエミュレータ

Android Studioで、デバッグ対象にiPhoneを選択します。

//image[debug03][iPhoneエミュレータでデバッグ開始][scale=0.7, pos=H]

//clearpage
iPhoneでプログラムが開始され表示されます。同じように「+」ボタンをクリックすると
表示している数が増えます。

//image[debug04][iPhoneエミュレータでデバッグ中][scale=0.9, pos=H]
