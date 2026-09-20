// 以下のプログラムは、二つの文字列を合成したり、その長さを求めるする機能を持つクラス、TwoStringsのヘッダファイルと、そのクラスを使ったサンプルプログラムです。このクラスのソースファイルである、twostring.cppを完成させ、実行結果の通りに動くようにしなさい。
// 実行結果:
// 一つ目の文字列はHello
//二つ目の文字列はWorld
// 二つの文字列を合成したものはHelloWorld
// 合成した文字列の長さは10文字
#include <iostream>
#include "twostrings.h"

using namespace std;

int main()
{
    TwoStrings s;
    s.setString1("Hello");
    s.setString2("World");
    cout << "一つ目の文字列は" << s.getString1() << endl;
    cout << "二つ目の文字列は" << s.getString2() << endl;
    cout << "二つの文字列を合成したものは" << s.getConnectedString() << endl;
    cout << "合成した文字列の長さは" << s.getConnectedLength() << "文字" << endl;
    return 0;
}
