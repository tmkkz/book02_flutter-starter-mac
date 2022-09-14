={03_homebrew} Homebrew

//abstract{
Homebrew（Mac、Linux用のパッケージマネージャー）をインストールします。すでにインストール済みの方はスキップしてください。

パッケージマネージャーとは、対象のプログラム・コマンド（たとえば、git）をインストールするときに、
必要なライブラリなどを一括でインストールしてくれます。また、パッケージマネージャーでインストールしておけば、
アップデートも一括で行えます。マシーンの引越し時にも、リストをコピーするだけで一括インストールができます。

今回の開発環境の作成では、

 * git --- Flutterの必須、
 * asdf --- Flutterのバージョン管理、
 * CocoaPods --- Swift、Objective-CでのCocoaプロジェクトの依存関係を管理、
 * Xcodes --- Xcodeのバージョン管理、

をインストールするために使います。

ここでのバージョン管理とは、複数のバージョン（Flutter、Xcode）をインストールし、バージョンを切り替えて使えるようにすることです。
//}

//makechaptitlepage[toc=on]

== Homebrewのインストール

　@<href>{https://brew.sh/index_ja, Homebrew本家}のページへアクセスします。

//image[homebrew01][][scale=0.7]


 1. 上図の赤ワク部分を、アイコンをクリックしてコピーする。
 2. ターミナルを開き、貼り付けます。
 3. エンターキーで実行します。

//tip[ターミナルについて]{
  ターミナルは、
@<href>{https://support.apple.com/ja-jp/guide/terminal/apd5265185d-f365-44cb-8b09-71a064a42125/mac, macOS付属のもの}でも良いですし、
ご自分の好みで選択してください。私は、「iterm2」を使っています。

こちらに、macOSで使えるターミナルの比較をされた良記事@<href>{https://zenn.dev/kawarimidoll/articles/007449407cc78d, Macの端末をいろいろ検討した結果iTerm2になった}があります。

//}

//clearpage

実行すると、以下のようになります。

 * インストールするものを表示
 * 作成するディレクトリを表示
 * Xcode Command Line Tools（Xcodeインストール済みの場合はスキップ）インストールを表示
 * 確認のため、「実行にはエンターキー」、「キャンセルは、ほかのキー」を押す。

//note[ターミナル画面について]{
　少し薄い文字でコメントをターミナル画面上に、「←←コメント」のように入れています。
//}

//terminal[][homebrewインストールコマンドの実行]{
 > /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"@<balloon>{エンターキー}

 ==> Checking for `sudo` access (which may request your password)...
 Password:@<balloon>{Macのパスワードを入力しエンターキー}
 ==> This script will install:@<balloon>{以下をインストールしますよ〜}
 /opt/homebrew/bin/brew
 /opt/homebrew/share/doc/homebrew
 /opt/homebrew/share/man/man1/brew.1
    ・
    ・中略
    ・
 /opt/homebrew
 ==> The following new directories will be created:@<balloon>{以下のフォルダが作成されるよ〜}
 /opt/homebrew/bin
 /opt/homebrew/etc
 ・
 ・中略
 ・
 /opt/homebrew/Frameworks
　==> The Xcode Command Line Tools will be installed.@<balloon>{XCodeのコマンドラインツールがインストールされるよ〜}
 Press RETURN/ENTER to continue or any other key to abort:@<balloon>{実行するならエンターキー、止めるのであれば他のキーを押して}
//}

//clearpage

ここで、エンターキーを押します。

//terminal[][エンターキーを押して続行]{
 ==> /usr/bin/sudo /usr/bin/install -d -o root -g wheel -m 0755 /opt/homebrew
 ==> /usr/bin/sudo /bin/mkdir -p /opt/homebrew/bin @<balloon>{先ほど表示したディレクトリ作成}
 @<balloon>{作成したディレクトリのパーミッション変更}
 @<balloon>{AppleよりXCode Command Line Toolsのインストール}
 @<balloon>{Homebrewのダウンロードとインストール}
 ==> Installation successful! @<balloon>{インストール完了}
 ==> Next steps: @<balloon>{終わったら以下を実行してね}
- Run these two commands in your terminal to add Homebrew to your PATH:

echo 'eval "$(/opt/homebrew/bin/brew shellenv)"' >> /Users/ユーザー名/.zprofile

eval "$(/opt/homebrew/bin/brew shellenv)"

- Run brew help to get started
- Further documentation: https://docs.brew.sh
//}

//blankline
Homebrewのインストールが完了しましたので、パスを通すために「~/.zshrc」に以下を追加してください。上記では
「.zprofile」に追加するようにありますが、「.zshrc」に書込みます。

//blankline

#@# textlint-disable
以下のコマンドを実行すると、「~/.zshrc」の最後の行へ「eval "$(/opt/homebrew/bin/brew shellenv)"」を追加します。
「~/.zshrc」がない場合にはファイルを作成して追加します。
#@# textlint-enable

//note[.zprofileと.zshrcの違い]{
こちらに、「@<href>{https://qiita.com/muran001/items/7b104d33f5ea3f75353f, zshの設定ファイルの読み込み順序と使い方Tipsまとめ}」
良記事があります。
//}

//image[0301][][scale=0.6, pos=H]
//clearpage

//terminal[][homebrewのパスを通す]{
 > echo 'eval "$(/opt/homebrew/bin/brew shellenv)"' >> ~/.zshrc

 > source ~/.zshrc @<balloon>{設定ファイル.zshrcの読み込み}
 > brew help @<balloon>{homebrewが動くかヘルプを表示}
 Example usage:
　brew search TEXT|/REGEX/
　brew info [FORMULA|CASK...]
　brew install FORMULA|CASK...
　brew update
　　・
　　・中略
　　・
　brew help [COMMAND]
　man brew
　https://docs.brew.sh
//}

以上で、Homebrewのインストールが完了しました。

最初に、「git」をインストールしてみましょう。ターミナルに「brew install git」と入力しエンターキーを押します。

//terminal[][gitのインストール]{
 > brew install git
//}

これだけで「git」がインストールできます。
