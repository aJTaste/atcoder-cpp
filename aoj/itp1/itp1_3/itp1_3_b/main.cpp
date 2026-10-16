// itp1_3_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> V;
    for (;;)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            break;
        }
        V.push_back(x);
    }
    for (int i = 0; i < V.size(); i++)
    {
        cout << "Case " << i + 1 << ": " << V[i] << "\n";
    }
}
