// abc304_b
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string N;
    cin >> N;
    for (int i = 0; i < static_cast<int>(N.size()); i++)
    {
        if (i < 3)
        {
            cout << N[i];
        }
        else
        {
            cout << 0;
        }
    }
    cout << "\n";
}
