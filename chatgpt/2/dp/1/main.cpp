#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> dp(N + 1);
    dp[0] = 0;
    if (N > 0)
    {
        dp[1] = 1;
    }
    for (int i = 2; i <= N; i++)
    {
        dp[i] = dp[i - 2] + dp[i - 1];
    }
    cout << dp[N] << "\n";
}
