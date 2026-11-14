// abc484_b
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int K;
    cin >> K;
    long long min_ = INF;
    bool ok = false;
    for (int i = 0; i < K; i++)
    {
        int x;
        cin >> x;
        if (min_ > x)
        {
            min_ = x;
        }
        if (x == 9)
        {
            ok = true;
        }
    }
    cout << ((!ok) ? -1 : min_) << "\n";
}
