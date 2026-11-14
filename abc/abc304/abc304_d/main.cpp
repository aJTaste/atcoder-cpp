// abc304_d
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long W, H, N;
    cin >> W >> H >> N;
    vector<pair<long long, long long>> p(N);
    for (auto &x : p)
    {
        cin >> x.first >> x.second;
    }
    long long A;
    cin >> A;
    vector<long long> a(A);
    for (auto &x : a)
    {
        cin >> x;
    }
    a.push_back(W);
    long long B;
    cin >> B;
    vector<long long> b(B);
    for (auto &x : b)
    {
        cin >> x;
    }
    b.push_back(H);
    long long min_ = INF;
    long long max_ = 0;
    map<pair<long long, long long>, long long> m;
    for (long long i = 0; i < N; i++)
    {
        auto itx = lower_bound(a.begin(), a.end(), p[i].first);
        auto ity = lower_bound(b.begin(), b.end(), p[i].second);
        m[{*itx, *ity}]++;
    }
    for (auto &x : m)
    {
        long long count = x.second;
        if (count > max_)
        {
            max_ = count;
        }
        if (count < min_)
        {
            min_ = count;
        }
    }
    if (static_cast<long long>(m.size()) < (A + 1) * (B + 1))
    {
        min_ = 0;
    }
    cout << min_ << " " << max_ << "\n";
}
