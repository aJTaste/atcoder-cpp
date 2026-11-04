// abc302_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (auto &x : S)
    {
        cin >> x;
    }
    vector<int> x = {0, 0, -1, 1, -1, 1, -1, 1};
    vector<int> y = {1, -1, 0, 0, 1, 1, -1, -1};
    string snuke = "snuke";
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (S[i][j] == 'u')
            {
                for (int a = 0; a < 8; a++)
                {
                    bool ok = true;
                    for (int b = 2, c = 0; b > -3; b--, c++)
                    {
                        int ni = i + y[a] * b;
                        int nj = j + x[a] * b;
                        if (0 > ni || ni > H - 1 || 0 > nj || nj > W - 1)
                        {
                            ok = false;
                            break;
                        }
                        if (S[ni][nj] != snuke[c])
                        {
                            ok = false;
                        }
                    }
                    if (ok == true)
                    {
                        for (int b = 2; b > -3; b--)
                        {

                            int ni = i + y[a] * b;
                            int nj = j + x[a] * b;
                            cout << ni + 1 << " " << nj + 1 << "\n";
                        }
                        return 0;
                    }
                }
            }
        }
    }
}
