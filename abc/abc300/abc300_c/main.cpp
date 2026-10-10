// abc300_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H;
    int W;
    cin >> H >> W;
    vector<string> C(H);
    for (auto &x : C)
    {
        cin >> x;
    }
    vector<int> S(min(H, W), 0);
    for (int i = 1; i < H; i++)
    {
        for (int j = 1; j < W; j++)
        {
            if (C[i][j] == '.')
            {
                continue;
            }
            if (C[i - 1][j - 1] == '#' && C[i - 1][j + 1] == '#')
            {
                for (int k = 1; k < min(H, W); k++)
                {
                    if ((i - k <= 0 || j - k <= 0) || C[i - 1 - k][j - 1 - k] != '#')
                    {
                        S[k - 1]++;
                        break;
                    }
                }
            }
        }
    }
    for (const auto &x : S)
    {
        cout << x << " ";
    }
}
