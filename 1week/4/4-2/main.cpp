// 以下のプログラムのソースファイル、hoge.cppに、コンストラクタおよび、デストラクタを追加し、期待される実行結果と同じ結果が得られるようにしなさい。コンストラクタおよびデストラクタないでの処理は、指定したとおりにしなさい。
#include <iostream>
#include "hoge.h"

using namespace std;

int main()
{
    Hoge *pH;
    pH = new Hoge();
    pH->foo();
    delete pH;
    return 0;
}
