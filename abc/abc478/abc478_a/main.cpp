// abc478_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int M;
    cin >> N >> M;
    vector<int> V(N, 0);
    for (;;)
    {
        for (int i = 0; i < N; i++)
        {
            V[i]++;
            M--;
            if (M == 0)
            {
                for (int i = 0; i < N; i++)
                {
                    cout << V[i] << "\n";
                }
                return 0;
            }
        }
    }
}
