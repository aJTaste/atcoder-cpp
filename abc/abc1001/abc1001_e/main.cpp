// abc1001_e
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin >> S;
    while (!S.empty())
    {
        if (S.size() < 3)
        {
            cout << "No\n";
            return 0;
        }
        if (S.substr(S.size() - 3, 3) == "JOI")
        {
            S.erase(S.size() - 3, 3);
            continue;
        }
        if (S.substr(S.size() - 3, 3) == "IOI")
        {
            S.erase(S.size() - 3, 3);
            continue;
        }
        if (S.size() >= 4)
        {
            if (S.substr(S.size() - 4, 4) == "JOIG")
            {
                S.erase(S.size() - 4, 4);
                continue;
            }
        }
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
}
