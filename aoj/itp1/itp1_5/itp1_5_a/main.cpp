// itp1_5_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> V;
    for (;;)
    {
        int H;
        int W;
        cin >> H >> W;
        if (H == 0 && W == 0)
        {
            break;
        }
        V.push_back({H, W});
    }
    for (auto &x : V)
    {
        for (int i = 0; i < x.first; i++)
        {
            for (int j = 0; j < x.second; j++)
            {
                cout << '#';
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
