// itp1_5_b
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
        for (int i = 0; i < x.second; i++)
        {
            cout << '#';
        }
        cout << "\n";
        for (int i = 0; i < x.first - 2; i++)
        {
            cout << '#';
            for (int j = 0; j < x.second - 2; j++)
            {
                cout << '.';
            }
            cout << "#\n";
        }
        for (int i = 0; i < x.second; i++)
        {
            cout << '#';
        }
        cout << "\n\n";
    }
}
