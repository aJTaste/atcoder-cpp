// abc481_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int Q;
    cin >> Q;
    map<string, int> name;
    int counting = 1;
    for (int i = 0; i < Q; i++)
    {
        string x;
        cin >> x;
        if (!name.contains(x))
        {
            name.insert({x, counting});
            cout << counting << "\n";
            counting++;
        }
        else
        {
            cout << name[x] << "\n";
        }
    }
}
