#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> H(N);
    for (auto &x : H)
    {
        cin >> x;
    }
    vector<long long> dp(N);
    dp[0] = 0;
    dp[1] = abs(H[1] - H[0]);
    for (int i = 2; i < N; i++)
    {
        dp[i] = min(dp[i - 2] + abs(H[i] - H[i - 2]), dp[i - 1] + abs(H[i] - H[i - 1]));
    }
    cout << dp[N - 1] << "\n";
}
