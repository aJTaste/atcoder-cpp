// ABC085B - Kagami Mochi
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    sort(d.begin(), d.end(), greater<int>());
    for (int j = 0; j < n-1; j++)
    {
        if (d[j] == d[j + 1])
        {
            count++;
        }
    }
    cout << d.size() - count << endl;
}
