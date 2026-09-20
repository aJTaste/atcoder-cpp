// A - Nine or Nein
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    int B;
    cin >> A >> B;
    if (A + B == 9)
    {
        cout << "Nine\n";
        return 0;
    }
    if (A - B == 9)
    {
        cout << "Nine\n";
        return 0;
    }
    if (A * B == 9)
    {
        cout << "Nine\n";
        return 0;
    }
    if (static_cast<double>(A) / B == 9)
    {
        cout << "Nine\n";
        return 0;
    }
    cout << "Nein\n";
    return 0;
}
