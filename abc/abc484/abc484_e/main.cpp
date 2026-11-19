// abc484_e
// 2026/11/16
// longlong変換忘れるな
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
long long op(long long a, long long b) { return a + b; }
long long e() { return 0; }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, L, R;
    cin >> N >> L >> R;
    vector<long long> A(N);
    vector<long long> sum(N + 1);
    sum[0] = 0;
    for (long long i = 0; i < N; i++)
    {
        cin >> A[i];
        sum[i + 1] = sum[i] + A[i];
    }
    vector<long long> V = sum;
    sort(V.begin(), V.end());
    V.erase(unique(V.begin(), V.end()), V.end());
    segtree<long long, op, e> seg(V.size());
    long long counting = 0;
    auto itp = lower_bound(V.begin(), V.end(), sum[0]) - V.begin();
    seg.set(itp, 1);
    for (long long i = 1; i < N + 1; i++)
    {
        long long cnthere = 0;
        auto itl = lower_bound(V.begin(), V.end(), sum[i] - R) - V.begin();
        auto itr = upper_bound(V.begin(), V.end(), sum[i] - L) - V.begin();
        counting += seg.prod(itl, itr);
        auto it = lower_bound(V.begin(), V.end(), sum[i]) - V.begin();
        seg.set(it, seg.get(it) + 1);
    }
    cout << counting << "\n";
}
