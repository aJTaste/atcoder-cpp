// abc480_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S1;
    string S2;
    cin >> S1 >> S2;
    if ((S1[0] == 'A' && S2[1] == 'D') || (S1[0] == 'D' && S2[1] == 'A'))
    {
        cout << "No\n";
    }
    else if ((S1[1] == 'A' && S2[0] == 'D') || (S1[1] == 'D' && S2[0] == 'A'))
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }
}
