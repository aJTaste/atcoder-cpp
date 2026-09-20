// ABC088B - Card Game for Two
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool isalice = true;
    int n;
    int alice = 0;
    int bob = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    for (int j = 0; j < n; j++)
    {
        if (isalice == true)
        {
            alice += a[j];
        }
        else
        {
            bob += a[j];
        }
        isalice = !isalice;
    }
    cout << alice - bob << endl;
}
