// abc485_e
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
    vector<vector<pair<int, int>>> V(N + 1, vector<pair<int, int>>());
    for (int i = 0; i < M; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        V[a].push_back({b, c});
    }
    queue<tuple<int, int, int>> q;
    vector<vector<pair<int, int>>> D(N + 1);
    for (auto &x : V[1])
    {
        int a = x.first;
        int b = x.second;
        if (D[a].size() == 0 || (D[a].size() == 1 && D[a][0].second != b))
        {
            D[a].push_back({1, b});
            q.push({a, b, 1});
        }
    }
    tuple<int, int, int> now;
    while (!q.empty())
    {
        now = q.front();
        q.pop();
        int u = get<0>(now);
        int col = get<1>(now);
        int dist = get<2>(now);
        for (auto &x : V[u])
        {
            int a = x.first;
            int b = x.second;
            if (x.second == col)
            {
                continue;
            }
            if (D[a].size() == 0 || (D[a].size() == 1 && D[a][0].second != b))
            {
                D[a].push_back({dist + 1, b});
                q.push({a, b, dist + 1});
            }
        }
    }
    cout << ((D[N].empty()) ? -1 : D[N][0].first) << "\n";
}
