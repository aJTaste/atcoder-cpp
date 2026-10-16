// itp1_6_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> S(13, false);
    vector<bool> H(13, false);
    vector<bool> C(13, false);
    vector<bool> D(13, false);
    for (int i = 0; i < n; i++)
    {
        string x;
        int y;
        cin >> x >> y;
        if (x == "S")
        {
            S[y - 1] = true;
        }
        if (x == "H")
        {
            H[y - 1] = true;
        }
        if (x == "C")
        {
            C[y - 1] = true;
        }
        if (x == "D")
        {
            D[y - 1] = true;
        }
    }
    for (int i = 0; i < 13; i++)
    {
        if (S[i] == false)
        {
            cout << "S " << i + 1 << "\n";
        }
    }
    for (int i = 0; i < 13; i++)
    {
        if (H[i] == false)
        {
            cout << "H " << i + 1 << "\n";
        }
    }
    for (int i = 0; i < 13; i++)
    {
        if (C[i] == false)
        {
            cout << "C " << i + 1 << "\n";
        }
    }
    for (int i = 0; i < 13; i++)
    {
        if (D[i] == false)
        {
            cout << "D " << i + 1 << "\n";
        }
    }
}
