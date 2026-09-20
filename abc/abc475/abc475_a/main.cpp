// abc475_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    for (int i = 0; i < int(S.size()); i++)
    {
        if (i != 0)
        {
            cout << "o";
        }
        cout << S[i];
    }
}
