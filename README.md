# Interface Implementation Example.

参考資料: 「C++のためのAPIデザイン」 [リンク](https://www.sbcr.jp/product/4797369151/)

> 第5章 スタイル  
> 1. フラットC API
> 2. オブジェクト指向C++ API
> 3. テンプレートベースの API
> 4. データ駆動型API

上記、4つのAPIのスタイルのうち、オブジェクト指向C++ API と　テンプレートベースの API について実装したサンプルです。（フラットC API の実装は自明と思われます。逆にデータ駆動API は単純な例示が難しく、また性能上選択肢に登りにくいと考えています。）

## オブジェクト指向C++ API の例

- InheritIF.h
- InheritIFimpl.hpp
- InheritIFimpl.cpp
- InheritIFuser.hpp
- InheritIFuser.cpp
- InheritIFmain.cpp

InheritIF.h に定義した抽象クラスを、InheritIFimpl.h で継承して定義し、オーバーライドしたメソッド関数を InheritIFimpl.cpp で定義しています。

InheritIF.h で定義したクラスを使う側では、参照またはポインタでインスタンスを受け取り、そのメソッド関数を呼び出します。

InheritIF.h で定義したクラスのインスタンスを生成するには、InheritIFimpl.h をインクルードしてそのコンストラクタを呼び出す必要があります。

今回の例では InheritIFuser.cpp に使う側、InheritIFmain.cpp に生成する側を記載しています。
一つのコードにまとめることもできますが、一般的に生成と利用は密結合すべきではないと思われます。

InheritIF.h のI/Fで提供されるクラスの振る舞いは、サブクラスを定義するだけで自由に変更・追加可能です。

## テンプレートベースの API

- TemplateIF.h
- TemplateIFimpl.h
- TemplateIFimpl.cpp
- TemplateIFuse.cpp

TemplateIF.h にI/Fとなるクラスを定義しますが、InheritIF.h　とは違い仮想関数では定義しません。その代わり inline 関数で基底クラスの同名メソッド関数を呼び出しています。基底クラスの前方宣言も行って、テンプレートインスタンスで提供するI/Fを別名で宣言しておきます。

TemplateIFimpl.h には基底クラスとなるクラスを定義します。TemplateIFimpl.cpp ではそのメソッド関数を定義します。

TemplateIF.h で定義したクラスのインスタンスを生成するには、TemplateIF.h だけでなく TemplateIFimpl.h のインクルードも必要になります。また利用についても同様です。
そのため、I/F の定義と実装は InheritIF に比べて少し密結合していると言えます。

ただし、この実装では TemplateIF.h のテンプレートパラメータに渡す基底クラスを変更・追加することで、TemplateIF.h の先の動作を変更・追加することができます。

また inline 関数でコンパイル時に直接基底クラスのメソッド関数を呼び出すような最適化ができます。

## 参考：クラス定義とメソッド定義を分けただけ（スタブ定義）

- StubIF.h
- StubIF.cpp
- StubIFuse.cpp

StubIF.h に定義したクラスの、メソッド関数を StubIF.cpp に定義しています。StubIFuse.cpp は StubIF.h を直接生成し、利用します。

この例では、StubIFuse.cpp から StubIF.h、StubIF.cpp には強い結合があります。StubIFuse.cpp のテストをするときに StubIF.h, StubIF.cpp の動きを変更するにはインクルード・リンクするファイルを別の実体にすげ替える必要があります。

フラットC API でのI/F提供でも、同様の課題があります。
