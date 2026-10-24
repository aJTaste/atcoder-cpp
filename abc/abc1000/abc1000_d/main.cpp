// abc1000_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int A;
    int B;
    cin >> A >> B;
    if (A < B)
    {
        cout << -1 << "\n";
        return 0;
    }
    if (A == B)
    {
        cout << 0 << "\n";
        return 0;
    }
    cout << 1 << "\n";
}
