// itp1_2_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if (a < b && b < c)
    {
        cout << "Yes\n";
        return 0;
    }
    cout << "No\n";
}
