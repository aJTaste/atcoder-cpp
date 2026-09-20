// 以下のプログラムは、回数をカウントするカウンター(Counter)クラスと、それを利用したプログラムである。Counterクラスに、引数付きのcount()メソッドを新たに追加し、以下のプログラムを完成させなさい。
// 実行結果
// 回数:2回
// 回数:6回
// 回数:0回
#include <iostream>
#include "counter.h"

using namespace std;

int main()
{
    //  カウンタを生成
    Counter *pC = new Counter();
    pC->count(); //  １回カウント
    pC->count(); //  １回カウント
    cout << "回数:" << pC->getCount() << "回" << endl;
    pC->count(4); //  ４回カウント
    cout << "回数:" << pC->getCount() << "回" << endl;
    //  カウンタをリセット
    pC->reset();
    cout << "回数:" << pC->getCount() << "回" << endl;
    //  カウンタを消去
    delete pC;
    return 0;
}
