// abc473_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int K;
    cin >> N >> K;
    int A = 0;
    for (int i = 0;; i++)
    {
        string B = to_string(A);
        int count = 0;
        for (int j = N - (int)B.size(); j < N; j++)
        {
            count += (B[j] - '0') * j;
        }
        if (count == K)
        {
            for (int j = 0; j < N - (int)B.size(); j++)
            {
                cout << 0 << " ";
            }
            for (int j = N - (int)B.size(); j < N; j++)
            {
                cout << B[j] << " ";
                if (j == 0 && B[j] == K)
                {
                    return 0;
                }
            }
            cout << "\n";
        }
    }
}
