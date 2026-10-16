// itp1_4_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << a / b << " ";
    cout << a % b << " ";
    cout << fixed << setprecision(5) << double(a) / double(b) << "\n";
}
