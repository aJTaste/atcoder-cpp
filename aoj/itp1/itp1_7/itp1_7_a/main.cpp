// itp1_7_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> ans;
    for (;;)
    {
        int m;
        int f;
        int r;
        cin >> m >> f >> r;
        if (m + f + r == -3)
        {
            break;
        }
        if (m == -1 || f == -1)
        {
            ans.push_back('F');
        }
        else if (m + f >= 80)
        {
            ans.push_back('A');
        }
        else if (m + f >= 65)
        {
            ans.push_back('B');
        }
        else if (m + f >= 50)
        {
            ans.push_back('C');
        }
        else if (m + f >= 30)
        {
            if (r >= 50)
            {
                ans.push_back('C');
            }
            else
            {
                ans.push_back('D');
            }
        }
        else
        {
            ans.push_back('F');
        }
    }
    for (auto &x : ans)
    {
        cout << x << "\n";
    }
}
