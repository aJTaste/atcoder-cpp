// abc400_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long count = 0;
    for (long long i = 2;; i += 2)
    {
        if (i * i > N)
        {
            break;
        }
        count++;
    }
    for (long long i = 1;; i++)
    {
        if (2 * i * i > N)
        {
            break;
        }
        count++;
    }
    cout << count << "\n";
}
