// itp1_8_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string T;
    getline(cin, T);
    for (auto &x : T)
    {
        if (x >= 65 && x <= 90)
        {
            cout << static_cast<char>(x + 32);
        }
        else if (x >= 97 && x <= 122)
        {
            cout << static_cast<char>(x - 32);
        }
        else
        {
            cout << x;
        }
    }
    cout << "\n";
}
