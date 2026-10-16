// itp1_7_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (;;)
    {
        int n;
        int x;
        int null_;
        cin >> n >> x;
        if (n == 0 && x == 0)
        {
            break;
        }
        int counting = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                for (int k = j + 1; k <= n; k++)
                {
                    if (i + j + k == x)
                    {
                        counting++;
                    }
                }
            }
        }
        cout << counting << "\n";
    }
}
