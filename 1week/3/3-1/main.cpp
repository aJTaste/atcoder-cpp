// 以下のプログラムのクラスCDataに、メンバ変数のセッターおよびゲッターを追加し、ビルドが通るようにし、期待される実行結果を得られるように書き換えなさい。
// 実行結果: number = 100 comment = Programming C++
#include <iostream>
#include "data.h"

using namespace std;

int main()
{
    CData d;
    d.init(); //  パラメータを初期化
    d.setNumber(100);
    d.setComment("Programming C++");
    cout << "number = " << d.getNumber() << " comment = " << d.getComment() << endl;
    return 0;
}
