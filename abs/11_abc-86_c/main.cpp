// ABC086C - Traveling
// 20:10~20:46
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string judge = "Yes";
    int n;
    cin >> n;
    vector<int> t(n);
    vector<int> x(n);
    vector<int> y(n);
    for (int a = 0; a < n; a++)
    {
        cin >> t[a] >> x[a] >> y[a];
    }
    int now_x = 0;
    int now_y = 0;
    //
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (t[i] >= (abs(now_x - x[i]) + abs(now_y - y[i])) && t[i] % 2 == (abs(now_x - x[i]) + abs(now_y - y[i])) % 2)
            {
                now_x = x[i];
                now_y = y[i];
            }
            else
            {
                judge = "No";
            }
        }
        else
        {
            if (t[i] - t[i - 1] >= (abs(now_x - x[i]) + abs(now_y - y[i])) && (t[i] - t[i - 1]) % 2 == (abs(now_x - x[i]) + abs(now_y - y[i])) % 2)
            {
                now_x = x[i];
                now_y = y[i];
            }
            else
            {
                judge = "No";
            }
        }
    }
    cout << judge << endl;
}
