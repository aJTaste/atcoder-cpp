// abc389_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long X;
    cin >> X;
    long long N = 1;
    for (int i = 2;; i++)
    {
        if (N == X)
        {
            cout << i - 1 << "\n";
            return 0;
        }
        N *= i;
    }
}
