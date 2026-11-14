// abc304_c
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, D;
    cin >> N >> D;
    vector<pair<long long, long long>> pos(N);
    for (auto &x : pos)
    {
        cin >> x.first >> x.second;
    }
    queue<int> q;
    q.push(0);
    int now;
    vector<int> d(N, 0);
    while (!q.empty())
    {
        now = q.front();
        q.pop();
        for (int i = 0; i < N; i++)
        {
            int nx = pos[now].first - pos[i].first;
            int ny = pos[now].second - pos[i].second;
            if (nx * nx + ny * ny <= D * D)
            {
                if (!d[i])
                {
                    q.push(i);
                    d[i] = 1;
                }
            }
        }
    }
    for (auto &x : d)
    {
        if (x)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}
