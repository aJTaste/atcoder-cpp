// abc484_f
#include "atcoder/all"
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
long long op_min(long long a, long long b) { return min(a, b); }
long long e_min() { return INF; }
long long op_max(long long a, long long b) { return max(a, b); }
long long e_max() { return -INF; }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, Q;
    cin >> N >> Q;
    vector<long long> A(N);
    vector<long long> A2(N);
    for (long long i = 0; i < N; i++)
    {
        long long x;
        cin >> x;
        A[i] = x;
        A2[i] = x;
        if (x == -1)
        {
            A[i] = INF;
            A2[i] = -INF;
        }
    }
    segtree<long long, op_min, e_min> min_(A);
    segtree<long long, op_max, e_max> max_(A2);
    for (long long i = 0; i < Q; i++)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            long long j, x;
            cin >> j >> x;
            min_.set(j - 1, (x == -1) ? INF : x);
            max_.set(j - 1, (x == -1) ? -INF : x);
        }
        else
        {
            long long l, r;
            cin >> l >> r;
            if (min_.prod(l - 1, r) == max_.prod(l - 1, r) || min_.prod(l - 1, r) == INF)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}
