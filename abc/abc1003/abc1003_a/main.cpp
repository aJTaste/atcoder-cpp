#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int H, W, Q;
    cin >> H >> W >> Q;
    vector<vector<vector<int>>> V(H, vector<vector<int>>(W, vector<int>(2, 0)));
    for (int i = 0; i < Q; i++)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int x, y, c;
            cin >> x >> y >> c;
            for (int a = 0; a < 2; a++)
            {
                for (int b = 0; b < 2; b++)
                {
                    if (!V[x + b - 1][y + a - 1][1])
                    {
                        V[x + b - 1][y + a - 1][0] = c;
                    }
                }
            }
        }
        else
        {
            int x, y;
            cin >> x >> y;
            for (int a = 0; a < 2; a++)
            {
                for (int b = 0; b < 2; b++)
                {
                    V[x + b - 1][y + a - 1][1] = 1;
                }
            }
        }
    }
    for (auto &x : V)
    {
        for (auto &y : x)
        {
            cout << y[0] << " ";
        }
        cout << "\n";
    }
}
