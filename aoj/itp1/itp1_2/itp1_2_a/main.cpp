// itp1_2_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a >> b;
    string result = "==";
    if (a < b)
    {
        result = '<';
    }
    if (a > b)
    {
        result = '>';
    }
    cout << "a" << " " << result << " " << "b" << "\n";
}
