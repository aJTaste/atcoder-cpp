// C++のcinおよびcoutを使って、2つの整数をキーボードから入力させ、その二つの数の和・差を表示するプログラムを作りなさい。

// 期待される実行結果
// 1つ目の数:5 ← キーボードから任意にを入力
// 2つ目の数:3 ← キーボードから任意にを入力
// 5 + 3 = 8
// 5 - 3 = 2

#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "1つ目の値:";
    cin >> num1;
    cout << "2つ目の値:";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    return 0;
}
