// abc486_d
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> L(N);
    vector<int> P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i] >> P[i];
    }
    vector<long long> dp(N + 1, INF);
    dp[1] = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j >= L[i]; j--)
        {
            dp[j + 1] = min(dp[j + 1], dp[j] + P[i]);
        }
    }
    long long ans = INF;
    for (int i = L[N - 1]; i < N + 1; i++)
    {
        ans = min(ans, dp[i]);
    }
    if (ans == INF)
    {
        cout << "-1\n";
    }
    else
    {
        cout << ans + P[N - 1] << "\n";
    }
}
