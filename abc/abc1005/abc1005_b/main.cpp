// abc1005_b
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, M, Q;
    cin >> N >> M >> Q;
    vector<long long> P(N + 1, 0);
    map<pair<long long, long long>, long long> m; // 日付, 個数目
    vector<long long> sums(M + 1, 0);
    for (long long i = 0; i < N; i++)
    {
        long long p, a;
        cin >> p >> a;
        P[i + 1] = P[i] + p;
        sums[a] += p;
        m[{a, i + 1}] = sums[a];
    }
    for (long long i = 1; i <= M; i++)
    {
        m[{i, 0}] = 0;
    }
    vector<long long> ans(Q);
    for (long long i = 0; i < Q; i++)
    {
        long long T, L, R;
        cin >> T >> L >> R;
        auto r = prev(m.upper_bound({T, R}));
        auto l = prev(m.upper_bound({T, L - 1}));
        ans[i] = (P[R] - P[L - 1]) - ((*r).second - (*l).second) / 2;
    }
    for (auto &x : ans)
    {
        cout << x << "\n";
    }
}
