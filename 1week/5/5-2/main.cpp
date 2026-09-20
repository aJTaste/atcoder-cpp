// 次のプログラムの、クラスObjectは、生成したオブジェクトの数を、静的メンバ変数m_objectNumで数えている。このクラスに、m_objectNumの値を取得するint型の静的メンバ関数getObjectNum()を追加し、プログラムを、期待される実行結果が得られるように変更しなさい。
// 実行結果
// オブジェクトの数:3
// オブジェクトの数:2
#include <iostream>
#include "object.h"

using namespace std;

int main()
{
    Object *o1, *o2, *o3;
    o1 = new Object();
    o2 = new Object();
    o3 = new Object();
    cout << "オブジェクトの数:" << Object::getObjectNum() << endl;
    delete o3;
    cout << "オブジェクトの数:" << Object::getObjectNum() << endl;
    delete o2;
    delete o1;
    return 0;
}
