// 以下のプログラムは、カウンタークラスCountを使用したプログラムである。このプログラムを、指定されたように変更しなさい。
// main.cppの18行目に出ている、c1.getCount() + c2.getCount()を、クラスCounterの静的メソッドによって出力できるようにプログラムを改造しなさい。その際、以下のようにクラスCounterを変更すること。
// Counterクラスの変更ポイント
// 作成する静的メンバ関数の名前は、getTotalCount()とする。（戻り値はint）
// この関数内では、トータルのカウント回数を記録した静的メンバ変数を、m_totalCountとする。
// 実行結果
// c1のカウント数:3
// c2のカウント数:1
// トータルのカウント数:4
#include <iostream>

#include "counter.h"

using namespace std;

int Counter::m_totalCount = 0;

int main()
{
    Counter c1, c2;
    c1.count();
    c2.count();
    c2.count();
    c2.reset();
    c1.count();
    c1.count();
    c2.count();
    cout << "c1のカウント数：" << c1.getCount() << endl;
    cout << "c2のカウント数：" << c2.getCount() << endl;
    cout << "トータルのカウント数:" << Counter::getTotalCount() << endl;
    return 0;
}
