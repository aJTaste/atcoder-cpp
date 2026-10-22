#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    long long Q;
    cin >> N >> Q;
    vector<long long> A(N + 1);
    vector<long long> C(N + 1, 0);
    vector<long long> D(N + 1, 0);
    vector<long long> ans(Q);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
        C[i] = C[i - 1] + A[i];
        D[i] = D[i - 1] + C[i];
    }
    auto get_prefix_sum = [&](long long k) -> long long
    {
        if (k <= 0)
            return 0;
        long long low = 0, high = N, m = 0;
        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            if (mid * (mid + 1) / 2 <= k)
            {
                m = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        long long rem = k - m * (m + 1) / 2;
        return D[m] + C[rem];
    };

    for (long long i = 0; i < Q; i++)
    {
        long long l;
        long long r;
        cin >> l >> r;
        long long lsum;
        long long rsum;
        lsum = get_prefix_sum(r);
        rsum = get_prefix_sum(l - 1);
        ans[i] = lsum - rsum;
    }
    for (auto &x : ans)
    {
        cout << x << "\n";
    }
}
