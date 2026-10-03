// abc389_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int R;
    cin >> R;
    long long temp = R;
    long long count = 0;
    for (int i = 1; i < R; i++)
    {
        for (int j = temp; j > 0; j--)
        {
            if (sqrt(pow((i + 0.5), 2) + pow((j + 0.5), 2)) <= R)
            {
                count += j;
                temp = j;
                break;
            }
        }
    }
    cout << count * 4 + 1 + (R - 1) * 4 << "\n";
}
