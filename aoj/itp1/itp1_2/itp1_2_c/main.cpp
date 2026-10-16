// itp1_2_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> V(3);
    for (auto &x : V)
    {
        cin >> x;
    }
    sort(V.begin(), V.end());
    bool is = false;
    for (auto &x : V)
    {
        if (is)
        {
            cout << " ";
        }
        cout << x;
        is = true;
    }
    cout << "\n";
}
