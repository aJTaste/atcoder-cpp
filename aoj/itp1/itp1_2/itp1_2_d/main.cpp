// itp1_2_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int W;
    int H;
    int x;
    int y;
    int r;
    cin >> W >> H >> x >> y >> r;
    pair<int, int> a(x - r, y - r);
    pair<int, int> b(x + r, y + r);
    if (a.first >= 0 && a.second >= 0 && b.first <= W && b.second <= H)
    {
        cout << "Yes\n";
        return 0;
    }
    cout << "No\n";
}
