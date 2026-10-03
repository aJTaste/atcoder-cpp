// abc400_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long count = 0;
    for (long long i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        for (long long a = 1; a <= N; a++)
        {
            bool solve = false;
            for (long long b = 1; b <= N; b++)
            {
                if (i == pow(2, a) * pow(b, 2))
                {
                    count++;
                    solve = true;
                    break;
                }
            }
            if (solve == true)
            {
                break;
            }
        }
    }
    cout << count << "\n";
}
