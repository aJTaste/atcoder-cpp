// ABC081B - Shift only
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> count(n);
    int min_count = 100;

    for (int i = 0; i < n; i++)
    {
        bool wareta = true;
        cin >> a[i];
        while (wareta == true)
        {
            if (a[i] % 2 == 0 && a[i] != 0)
            {
                a[i] /= 2;
                count[i] += 1;
            }
            else
            {
                wareta = false;
            }
        }
        if (min_count > count[i])
        {
            min_count = count[i];
        }
    }

    cout << min_count << endl;
    return 0;
}
