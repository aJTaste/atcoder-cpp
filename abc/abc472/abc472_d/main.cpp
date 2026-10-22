// abc472_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H;
    int W;
    int K;
    cin >> H >> W >> K;
    vector<string> S(H);
    for (auto &x : S)
    {
        cin >> x;
    }
    queue<pair<int, int>> q;
    vector<vector<int>> dist(H, vector<int>(W, -1));
    vector<int> ncbomb;
    vector<int> nrbomb;
    for (int i = 0; i < H; i++)
    {
        if (!S[i].contains('#'))
        {
            nrbomb.push_back(i);
        }
    }
    for (int i = 0; i < W; i++)
    {
        bool is = false;
        for (int j = 0; j < H; j++)
        {
            if (S[j][i] == '#')
            {
                is = true;
            }
        }
        if (!is)
        {
            ncbomb.push_back(i);
        }
    }
    for (int i = 0; i < static_cast<int>(nrbomb.size()); i++)
    {
        for (int j = 0; j < static_cast<int>(ncbomb.size()); j++)
        {
            q.push({nrbomb[i], ncbomb[j]});
            dist[nrbomb[i]][ncbomb[j]] = 0;
        }
    }
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    pair<int, int> p;
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int xx = p.first + dx[i];
            int yy = p.second + dy[i];
            if (0 <= xx && xx < H && 0 <= yy && yy < W)
            {
                if (S[xx][yy] != '#' && dist[xx][yy] == -1)
                {
                    dist[xx][yy] = dist[p.first][p.second] + 1;
                    q.push({xx, yy});
                }
            }
        }
    }
    int counting = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (dist[i][j] != -1 && dist[i][j] <= K)
            {
                counting++;
            }
        }
    }
    cout << counting << "\n";
}
