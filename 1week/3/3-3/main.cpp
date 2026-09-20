// 以下のプログラムは、二つの整数の足し算と引き算を行うクラス、Calculationを用いて、二つの数の足し算と引き算の結果を出力したものである。実行結果と、以下に示す仕様をもとに、クラスCalculationを構成するヘッダファイルcalculation.hおよび、ソースファイルcalculation.cppを完成させ、動作するプログラムを完成させなさい。
#include <iostream>
#include "calculation.h"

using namespace std;

int main()
{
    Calculation c;
    c.setNumber1(8); //  一つ目の数をセット
    c.setNumber2(9); //  二つ目の数をセット
    //  二つの数の和を表示
    cout << c.getNumber1() << " + " << c.getNumber2() << " = " << c.add() << endl;
    //  二つの数の差を表示
    cout << c.getNumber1() << " - " << c.getNumber2() << " = " << c.sub() << endl;
    return 0;
}
