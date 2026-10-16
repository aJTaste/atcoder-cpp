// itp1_5_d
#include <bits/stdc++.h>
using namespace std;
int n_;

void call(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        if (x % 3 == 0)
        {
            cout << " " << i;
        }
        else
        {
            while (x > 0)
            {
                if (x % 10 == 3)
                {
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
        }
    }
    cout << "\n";
}

int main()
{
    cin >> n_;
    call(n_);
}
