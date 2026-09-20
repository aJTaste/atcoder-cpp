// 以下の実行例にならい、cinおよび、coutを用いて、コンソールから数値を入力し、その数を２倍した結果を表示するプログラムを作りなさい。

// 実行例
// 数値を入力してください:5 ← キーボードから任意の数値を入力
// 5を2倍した数は、10です。 ← 入力した数値の2倍の値を表示
#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "数値を入力してください:";
    cin  >> num;
    cout << num << "を2倍した数は、" << 2 * num << "です。" << endl;
    return 0;
}
