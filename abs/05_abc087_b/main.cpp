// ABC087B - Coins
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    int B;
    int C;
    int X;
    int count = 0;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;
    for (int i = 0; i <= A; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            for (int k = 0; k <= C; k++)
            {
                if (i * 500 + j * 100 + k * 50 == X)
                {
                    count += 1;
                }
            }
        }
    }
    cout << count << endl;
}
