// abc400_c
#include <bits/stdc++.h>
using namespace std;
bool square(long long x)
{
    long long root = static_cast<long long>(std::round(std::sqrt(x)));
    return root * root == x;
}
int main()
{
    long long N;
    cin >> N;
    long long count = 0;
    for (long long i = 2; i <= N; i += 2)
    {
        long long X = i;
        while (X % 2 == 0)
        {
            X /= 2;
        }
        if (X == 1)
        {
            count++;
            continue;
        }
        else
        {
            if (square(X))
            {
                count++;
                continue;
            }
        }
    }
    cout << count << "\n";
}
