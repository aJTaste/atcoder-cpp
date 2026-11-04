// abc302_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long A, B;
    cin >> A >> B;
    if (A % B == 0)
    {
        cout << A / B << "\n";
    }
    else
    {
        cout << A / B + 1 << "\n";
    }
}
