// 途中 2026/11/23
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<vector<pair<int, int>>> V(N + 1);
    for (int i = 0; i < M; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        V[a].push_back({b, c});
    }
    vector<pair<pair<int, int>, pair<int, int>>> dist(N + 1, {{-1, 0}, {-1, 0}});
    dist[1].first = {0, 0};
    queue<pair<int, pair<int, int>>> q;
    for (auto &x : V[1])
    {
        if (dist[x.first].first.first == -1)
        {
            dist[x.first].first = {x.first, 1};
            q.push({x.first, {x.second, 1}});
        }
        else if (dist[x.first].second.first == -1 && dist[x.first].first.second != x.second)
        {
            dist[x.first].second = {x.first, 1};
            q.push({x.first, {x.second, 1}});
        }
    }
    pair<int, pair<int, int>> now;
    while (!q.empty())
    {
        now = q.front();
        q.pop();
        for (auto &x : V[now.first])
        {
            if (dist[x.first].first.first == -1)
            {
                dist[x.first].first = {x.first, 1};
                q.push({x.first, {x.second, now.second.second + 1}});
            }
            else if (dist[x.first].second.first == -1 && dist[x.first].first.second != x.second)
            {
                dist[x.first].second = {x.first, 1};
                q.push({x.first, {x.second, now.second.second + 1}});
            }
        }
    }
}
