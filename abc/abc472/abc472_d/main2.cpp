// abc472_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H;
    int W;
    int K;
    cin >> H >> W >> K;
    vector<string> T(H);
    for (int i = 0; i < H; i++)
    {
        cin >> T[i];
    }
    queue<pair<int, int>> q;
    vector<vector<int>> dist(H, vector<int>(W, -1));
    vector<bool> rowHasBomb(H, false);
    vector<bool> colHasBomb(W, false);
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (T[i][j] == '#')
            {
                rowHasBomb[i] = true;
                colHasBomb[j] = true;
            }
        }
    }
    for (int i = 0; i < H; i++)
    {
        if (rowHasBomb[i] == true)
        {
            continue;
        }
        for (int j = 0; j < W; j++)
        {
            if (colHasBomb[j] == true)
            {
                continue;
            }
            dist[i][j] = 0;
            q.push({i, j});
        }
    }

    int dy[] = {1, -1, 0, 0};
    int dx[] = {0, 0, 1, -1};

    while (!q.empty())
    {
        auto [y, x] = q.front();
        q.pop();
        for (int d = 0; d < 4; d++)
        {
            int ny = y + dy[d], nx = x + dx[d];
            if (ny < 0 || ny >= H || nx < 0 || nx >= W)
            {
                continue;
            }
            // 爆弾マスならcontinue
            // すでに訪問済み(dist != -1)ならcontinue
            if (T[ny][nx] == '#' || dist[ny][nx] != -1)
            {
                continue;
            }
            // そうでなければ dist[ny][nx] = dist[y][x] + 1 して push
            dist[ny][nx] = dist[y][x] + 1;
            q.push({ny, nx});
        }
    }
    int result = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (dist[i][j] != -1 && dist[i][j] <= K)
            {
                result++;
            }
        }
    }
    cout << result << "\n";
}
