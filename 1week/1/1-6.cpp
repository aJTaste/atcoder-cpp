// cinおよび、coutを用いて、実行例にならい、コンソールから姓と名を入力し、名前を表示するプログラムをつくりなさい。ただし、出力する名前は、姓と名を＋演算子で結合して出力すること。

// 実行例
// 姓を入力:山田 ← キーボードから任意にを入力
// 命を入力:一郎 ← キーボードから任意にを入力
// 名前は「山田一郎」です。 ← 姓と名を結合して表示
#include <iostream>
#include <string>

using namespace std;

int main(){
    string sei, mei;
    cout << "姓を入力:";
    cin >> sei;
    cout << "名を入力";
    cin >> mei;
    cout << "名前は「" << sei + mei << "」です。" << endl;
    return 0;
}
