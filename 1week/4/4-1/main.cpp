// 以下のプログラムに、指定した変更を加えなさい。
// 実行結果: 3
// Numberクラスにコンストラクタをつけ、メンバ変数a,bを0で初期化する。
// main.cpp内の最後で、pNのメモリを解放する。
#include <iostream>
#include "number.h"

using namespace std;

int main()
{
    Number *pN;
    pN = new Number();
    int *capacity = new int[3];
    pN->setNumbers(1, 2);
    cout << pN->getAdd() << endl;
    delete pN;
    return 0;
}
