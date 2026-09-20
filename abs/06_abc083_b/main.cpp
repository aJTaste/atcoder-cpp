// ABC083B - Some Sums
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a;
    int b;
    string str;
    int sum2 = 0;
    cin >> n;
    cin >> a;
    cin >> b;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        str = to_string(i);
        for (char c : str)
        {
            sum += c - '0';
        }
        if (a <= sum && sum <= b)
        {
            sum2 += i;
        }
    }
    cout << sum2 << endl;
}
