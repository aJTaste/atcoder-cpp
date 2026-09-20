// 以下のクラスの静的メンバ関数を実装した、function.cppをついかし、期待される実行結果通りの結果が得られるように改造しなさい。
// 実行結果
// 3と1のうち、最大のものは3
// 3と1のうち、最小のものは1
#include <iostream>
#include "function.h"

using namespace std;

int main()
{
    int m = 3, n = 1;
    cout << m << "と" << n << "のうち、最大のものは" << Function::max(m, n) << endl;
    cout << m << "と" << n << "のうち、最小のものは" << Function::min(m, n) << endl;
    return 0;
}
