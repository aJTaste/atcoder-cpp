// itp1_7_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    int c;
    cin >> r >> c;
    vector<vector<int>> ans(r + 1, vector<int>(c + 1));
    for (int i = 0; i < r; i++)
    {
        int counting = 0;
        for (int j = 0; j < c; j++)
        {
            cin >> ans[i][j];
            counting += ans[i][j];
        }
        ans[i][c] = counting;
    }
    for (int i = 0; i < c + 1; i++)
    {
        int counting = 0;
        for (int j = 0; j < r; j++)
        {
            counting += ans[j][i];
        }
        ans[r][i] = counting;
    }
    for (auto &x : ans)
    {
        bool is = false;
        for (auto &y : x)
        {
            if (is == false)
            {
                cout << y;
                is = true;
            }
            else
            {
                cout << " " << y;
            }
        }
        cout << "\n";
    }
}
