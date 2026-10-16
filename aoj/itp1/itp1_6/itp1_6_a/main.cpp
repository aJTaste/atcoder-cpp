// itp1_6_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    bool is = false;
    reverse(v.begin(), v.end());
    for (auto &x : v)
    {
        if (is == false)
        {
            cout << x;
            is = true;
        }
        else
        {
            cout << " " << x;
        }
    }
    cout << "\n";
}
