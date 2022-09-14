={04-asdf} バージョン管理ツールasdf

//abstract{
そもそも、バージョン管理ツールとは？、また、なぜ必要なの？
//blankline
Flutterもそうですが、Python、Java、Ruby、Node.jsなどの
プログラミング言語やフレームワークは日々更新され、ある程度の修正・機能追加が終わった時点で新バージョンとしてリリースされます。

//blankline
新バージョンがリリースされる度に開発環境を更新すれば良いのですが、開発中のプロジェクトに影響がないとはいえません。

//blankline
また、開発したときのバージョン異なるバージョンで保守を行うと、

 * 動かなくなったり、
 * 使用していたWigdgetなどが非推奨（deprecation）になった。

など、予期せぬことが起こります。

//blankline
そのため、

 * PC全体で使えるデフォルトバージョンの指定、
 * プロジェクトフォルダ毎でのバージョンの指定、

ができるように、バージョン管理ツールをインストールします。

//}

//makechaptitlepage[toc=on]

== asdfのインストール

@<href>{https://asdf-vm.com, asdf本家サイト}

//image[asdf][][scale=0.8]

バージョン管理ツールは、

 * Javaのバージョン管理ツール　jenvなど
 * Rubyのバージョン管理ツール　rbenvなど
 * pythonのバージョン管理ツール　pyenv、anacondaなど
 * Node.jsのバージョン管理 nvmなど

プログラミング言語、フレームワーク毎にたくさんあります。

//blankline
Flutterにもバージョン管理ツールとして、「asdf」、「fvm」などがあります。「fvm」は、「flutterコマンド」を
直接入力できないので、今回は「asdf」を使います。

//blankline
「asdf」は、flutterだけではなく上記のものや「php」などたくさんのプログラミング言語・フレームワークのバージョン管理が行えます。
 これは、各プログラミング言語・フレームワークをプラグインとして扱い、asdfにインストールするプラグイン毎にバージョン管理ができるためです。

//blankline
 それでは、asdf本体のインストールは、Homebrewを使えば簡単です。

//clearpage
 ターミナルに「brew install asdf」と入力しエンターキーを押します。

//terminal[][asdfのインストール]{
 > brew install asdf

 To use asdf, add the following line to your ~/.zshrc:
 . /opt/homebrew/opt/asdf/libexec/asdf.sh
 Restart your terminal for the settings to take effect.
 zsh completions have been installed to:
 /opt/homebrew/share/zsh/site-functions
 ==> Summary
 🍺  /opt/homebrew/Cellar/asdf/0.10.2: 168 files, 717.0KB
 ==> Running `brew cleanup asdf`...
 Disable this behaviour by setting HOMEBREW_NO_INSTALL_CLEANUP.
 Hide these hints with HOMEBREW_NO_ENV_HINTS (see `man brew`).
 ==> Caveats
 ==> asdf
 To use asdf, add the following line to your ~/.zshrc:

 . /opt/homebrew/opt/asdf/libexec/asdf.sh

 Restart your terminal for the settings to take effect.

 zsh completions have been installed to:
 /opt/homebrew/share/zsh/site-functions
//}

 インストールが完了しましたので、「Caveats」にある指示に従い「~/.zshrc」にasdfのスクリプトが実行されるように、@<br>{}

 @<strong>{. /opt/homebrew/opt/asdf/libexec/asdf.sh}


 を追加します。

//blankline
 現時点での「~/.zshrc」は、

//list[.zshrc][]{
 # Homebrew
 eval "$（/opt/homebrew/bin/brew shellenv）"

 # asdf
  . /opt/Homebrew/opt/asdf/libexec/asdf.sh
//}

があれば大丈夫です。

//clearpage
設定ファイルを再読み込みます。

//terminal[][.zshrcの再読み込み]{
 > source ~/.zshrc
//}

//blankline
これで、asdfが動作します。ターミナルに「asdf」と入力しエンターキーを押すと、ヘルプが表示されます。

//terminal[][asdfのヘルプ]{
  ❯ asdf
  version: v0.10.2

  MANAGE PLUGINS
  asdf plugin add <name> [<git-url>]      Add a plugin from the plugin repo OR,
                                          add a Git repo as a plugin by
                                          specifying the name and repo url
  asdf plugin list [--urls] [--refs]      List installed plugins. Optionally show
                                          git urls and git-ref
  asdf plugin list all                    List plugins registered on asdf-plugins
                                          repository with URLs
  asdf plugin remove <name>               Remove plugin and package versions
               Update asdf to the latest on the master branch
     ・
     ・中略
     ・
  RESOURCES
  GitHub: https://github.com/asdf-vm/asdf
  Docs:   https://asdf-vm.com

  "Late but latest"
  -- Rajinikanth
//}

//blankline
Flutterのバージョン管理ができるように、「flutterプラグイン」をインストールします。
どんなプログラミング言語・フレームワークのバージョン管理ができるのかは、「asdf plugin list all」で確認できます。

//blankline
ターミナルに「asdf plugin add flutter」と入力しエンターキーを押します。

//terminal[][flutterプラグインのインストール]{
 > asdf plugin add Flutter
 updating plugin repository...HEAD is now at 08fb6a9 fix: recent erroneous PRs (#658)
//}

//blankline
Flutterのインストールは、asdf経由で行います。asdf経由でインストール可能なFlutterのバージョンを確認します。

//clearpage
ターミナルに「asdf list all flutter」と入力しエンターキーを押します。

//terminal[][asdfでインストール可能なFlutterのバージョン表示]{
 > asdf list all flutter
0.1.6-dev
0.2.1-dev
0.1.8-dev
0.1.9-dev
1.26.0-12.0.pre-dev
1.22.6-stable
  ・
  ・中略
  ・
2.13.0-0.1.pre-beta
2.10.5-stable @<balloon>{2.x系の最新版}
  ・
  ・中略
  ・
3.0.5-stable @<balloon>{最新の安定版}
  ・
  ・中略
  ・
3.3.0-0.5.pre-beta @<balloon>{最新のベータ版}
//}

過去のバージョンも含めインストール可能なバージョンが表示されます。

//note[インストール可能バージョンが表示されない場合]{
　Mac用のflutterは、「intel chip」、「Apple Silicon」版と分かれています。バージョン表示されない場合は、

#@# textlint-disable
//terminal[][Rosetta2使用許可]{
 > sudo softwareupdate --install-rosetta --agree-to-license
//}
#@# textlint-enable

　を行ってください。
//}

以上で、バージョン管理ツール「asdf」のインストールが完了し、Flutterインストールの準備ができました。
