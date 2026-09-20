// 以下のプログラムに、基本計算クラスFundClacを継承した新計算クラスNewCalcを指定されたとおりの仕様で追加し、期待された実行結果通りにプログラムが動くように改造しなさい。このさい、必要があれば、FundCalcクラスの必要な部分を改造しなさい。
#include <iostream>
#include "newcalc.h"

using namespace std;

int main()
{
    NewCalc n;
    n.setNumber1(10); //  一つ目の数を設定
    n.setNumber2(2);  //  二つ目の数を設定
    cout << n.getNumber1() << " + " << n.getNumber2() << " = " << n.add() << endl;
    cout << n.getNumber1() << " - " << n.getNumber2() << " = " << n.sub() << endl;
    cout << n.getNumber1() << " * " << n.getNumber2() << " = " << n.mul() << endl;
    cout << n.getNumber1() << " / " << n.getNumber2() << " = " << n.div() << endl;

    return 0;
}
