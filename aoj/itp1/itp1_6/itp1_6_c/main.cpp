// itp1_6_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<vector<int>>> V(4, vector<vector<int>>(3, vector<int>(10, 0)));
    for (int i = 0; i < n; i++)
    {
        int b;
        int f;
        int r;
        int v;
        cin >> b >> f >> r >> v;
        V[b - 1][f - 1][r - 1] += v;
    }
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            for (auto &x : V[i])
            {
                for (auto &y : x)
                {
                    cout << " " << y;
                }
                cout << "\n";
            }
        }
        else
        {
            cout << "####################\n";
            for (auto &x : V[i])
            {
                for (auto &y : x)
                {
                    cout << " " << y;
                }
                cout << "\n";
            }
        }
    }
}
