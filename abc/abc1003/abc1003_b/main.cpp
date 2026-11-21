// abc1003_b
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, X;
    cin >> N >> X;
    vector<long long> A(N);
    vector<long long> P(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    for (auto &x : P)
    {
        cin >> x;
    }
    queue<pair<long long, long long>> q;
    vector<vector<long long>> C(N + 1);
    for (long long i = 0; i < N; i++)
    {
        if (P[i] == -1)
        {
            if (X >= A[i])
            {
                q.push({i + 1, X - A[i]});
            }
        }
        else
        {
            C[P[i]].push_back(i + 1);
        }
    }
    vector<bool> B(N + 1);
    pair<long long, long long> now;
    while (!q.empty())
    {
        now = q.front();
        q.pop();
        B[now.first] = true;
        for (auto &x : C[now.first])
        {
            if (now.second >= A[x - 1])
            {
                q.push({x, now.second - A[x - 1]});
            }
        }
    }
    for (long long i = N; i > 0; i--)
    {
        if (B[i])
        {
            cout << i << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}
