// abc1001_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int A;
    int B;
    cin >> A >> B;
    if (min(A, B) != 0)
    {
        cout << 0 << "\n";
    }
    else if (max(A, B) == 1)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 1 << "\n";
    }
}
