#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    int W;
    cin >> N >> W;
    vector<int> weight(N);
    vector<int> value(N);
    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i] >> value[i];
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            dp[i][j] = (weight[i - 1] <= j)
                           ? max(dp[i - 1][j], dp[i - 1][j - weight[i - 1]] + value[i - 1])
                           : dp[i - 1][j];
        }
    }
    cout << dp[N][W] << "\n";
}
