// 以下のプログラムは、int型の配列を生成し、そこにあたいを入れて表示するものである。しかし、生成したメモリを解放する部分がない。この部分にメモリの開放をつけて、プログラムを完成させなさい。
// 実行結果: n[0]=0 n[1]=1 n[2]=2 n[3]=3
#include <iostream>

using namespace std;

int main()
{
    //  配列を生成
    int *num = new int[4];
    int i;
    //  配列に値を代入
    for (i = 0; i < 4; i++)
    {
        num[i] = i;
    }
    //  配列の内容を表示
    for (i = 0; i < 4; i++)
    {
        cout << "num[" << i << "]=" << num[i] << " ";
    }
    cout << endl;
    delete[] num;
    return 0;
}
