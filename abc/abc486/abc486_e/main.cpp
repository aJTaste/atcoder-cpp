// abc486_e
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long T;
    cin >> T;
    for (long long i = 0; i < T; i++)
    {
        long long N, M;
        cin >> N >> M;
        vector<pair<long long, pair<long long, long long>>> A;
        for (long long j = 0; j < M; j++)
        {
            long long u, v, c;
            cin >> u >> v >> c;
            A.push_back({c, {u, v}});
        }
        sort(A.begin(), A.end());
        vector<long long> dp(N + 1, 0);
        for (int l = 0; l < M;)
        {
            long long r = l;
            while (r < M && A[r].first == A[l].first)
            {
                r++;
            }
            vector<pair<long long, long long>> dpp;
            for (long long k = l; k < r; k++)
            {
                long long nowf = dp[A[k].second.first];
                long long nows = dp[A[k].second.second];
                dpp.push_back({A[k].second.first, nows + A[k].first});
                dpp.push_back({A[k].second.second, nowf + A[k].first});
            }
            for (auto &x : dpp)
            {
                dp[x.first] = max(dp[x.first], x.second);
            }
            l = r;
        }
        // for (auto &x : A)
        // {
        //     long long nowf = dp[x.second.first];
        //     long long nows = dp[x.second.second];
        //     dp[x.second.first] = max(nows + x.first, nowf);
        //     dp[x.second.second] = max(nowf + x.first, nows);
        // }
        cout << *max_element(dp.begin(), dp.end()) << "\n";
    }
}
