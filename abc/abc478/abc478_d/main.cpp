// abc478_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int Q;
    cin >> N >> Q;
    vector<vector<pair<int, int>>> V(Q + 1);
    for (int i = 0; i < Q; i++)
    {
        int L;
        int R;
        int X;
        cin >> L >> R >> X;
        V[X].push_back({L, R});
    }
    vector<vector<pair<int, int>>> V2(Q + 1);
    for (int i = 1; i < Q + 1; i++)
    {
        if (V[i].empty())
        {
            continue;
        }
        sort(V[i].begin(), V[i].end());
        V2[i].push_back({V[i][0].first, V[i][0].second});
        for (int j = 1; j < int(V[i].size()); j++)
        {
            if (V2[i].back().second >= V[i][j].first)
            {
                V2[i].back().second = max(V2[i].back().second, V[i][j].second);
            }
            else
            {
                V2[i].push_back(V[i][j]);
            }
        }
    }
    vector<int> imos(N + 2, 0);
    for (int i = 1; i <= Q; i++)
    {
        for (auto x : V2[i])
        {
            int L = x.first;
            int R = x.second;
            imos[L]++;
            imos[R + 1]--;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        imos[i] += imos[i - 1];
    }
    for (int i = 1; i <= N; i++)
    {
        cout << imos[i] << (i == N ? "" : " ");
    }
    cout << "\n";
}
