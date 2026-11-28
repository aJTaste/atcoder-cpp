// abc1004_d
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, Q;
    cin >> N >> Q;
    vector<long long> A(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    vector<long long> ans(Q);
    sort(A.begin(), A.end());
    vector<long long> Asum(N + 1);
    Asum[0] = 0;
    long long max_ = 0;
    for (long long i = 0; i < N; i++)
    {
        Asum[i + 1] = Asum[i] + A[i];
        if (max_ < A[i])
        {
            max_ = A[i];
        }
    }
    for (long long i = 0; i < Q; i++)
    {
        long long C;
        long long D;
        cin >> C >> D;
        long long l = 0;
        long long r = max_ / D + 1;
        long long m;
        long long diff;
        while (true)
        {
            m = (l + r) / 2;
            if (l == r)
            {
                long long cost; // 後で考える
                long long p = upper_bound(A.begin(), A.end(), D * m) - A.begin();
                cost = (Asum[N] - Asum[p]) - ((N - p) * m * D) + C * m;
                ans[i] = cost;
                break;
            }
            auto L = upper_bound(A.begin(), A.end(), D * m) - A.begin();
            auto R = lower_bound(A.begin(), A.end(), D * (m + 1)) - A.begin();
            diff = (D * N) - (D * (m + 1) * (R - L) - (Asum[R] - Asum[L])) - (L * D) - C;
            if (diff > 0)
            {
                l = m + 1;
            }
            else
            {
                r = m;
            }
        }
    }
    for (auto &x : ans)
    {
        cout << x << "\n";
    }
}
