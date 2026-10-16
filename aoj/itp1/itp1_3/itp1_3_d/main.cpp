// itp1_3_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int counting = 0;
    for (int i = a; i <= b; i++)
    {
        if (c % i == 0)
        {
            counting++;
        }
    }
    cout << counting << "\n";
}
