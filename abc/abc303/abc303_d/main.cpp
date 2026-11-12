// abc303_d
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int X, Y, Z;
    cin >> X >> Y >> Z;
    string S;
    cin >> S;
    int s_size = static_cast<int>(S.size());
    vector dp(s_size + 1, vector<long long>(2, INF));
    dp[0][0] = 0;
    for (int i = 0; i < s_size; i++)
    {
        int cur = 1;
        if (S[i] == 'a')
            cur = 0;
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                long long v = dp[i][j];
                if (j != k)
                    v += Z;
                if (cur == k)
                    v += X;
                else
                    v += Y;
                dp[i + 1][k] = min(dp[i + 1][k], v);
            }
        }
    }
    cout << min(dp[s_size][0], dp[s_size][1]) << endl;
}
