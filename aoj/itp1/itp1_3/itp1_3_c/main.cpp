// itp1_3_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> V;
    for (;;)
    {
        int x;
        int y;
        cin >> x >> y;

        if (x == 0 && y == 0)
        {
            break;
        }
        V.push_back({x, y});
    }
    for (auto &x : V)
    {
        cout << min(x.first, x.second) << " " << max(x.first, x.second) << "\n";
    }
}
