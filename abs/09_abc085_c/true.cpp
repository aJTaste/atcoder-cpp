// ABC085C - Otoshidama
// 23:40~24:02
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int y;
    int a = -1;
    int b = -1;
    int c = -1;
    cin >> n >> y;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            int k = n - i - j; //kはforする必要なくて、iとjが決まればkも確定する。

            if (i * 10000 + j * 5000 + k * 1000 == y && i + j + k == n)
            {
                a = i;
                b = j;
                c = k;
            }
        }
    }
    cout << a << " " << b << " " << c << endl;
}
