// abc1002_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int R;
    int C;
    cin >> R >> C;
    int counting = 0;
    vector<string> S(R);
    for (auto &x : S)
    {
        cin >> x;
    }
    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, -1, 1};
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (S[i][j] == 'L' && j != 0)
            {
                if (S[i + y[0]][j + x[0]] == 'R')
                {
                    counting++;
                }
            }
            if (S[i][j] == 'R' && j != C - 1)
            {
                if (S[i + y[1]][j + x[1]] == 'L')
                {
                    counting++;
                }
            }
            if (S[i][j] == 'U' && i != 0)
            {
                if (S[i + y[2]][j + x[2]] == 'D')
                {
                    counting++;
                }
            }
            if (S[i][j] == 'D' && i != R - 1)
            {
                if (S[i + y[3]][j + x[3]] == 'U')
                {
                    counting++;
                }
            }
        }
    }
    cout << counting / 2 << "\n";
}
