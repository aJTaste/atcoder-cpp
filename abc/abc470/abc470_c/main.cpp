// C - Inc, Dec, Xor
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int Q;
    cin >> N >> Q;
    vector<int> A(N);
    vector<int> query(Q);
    vector<int> query2(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> query[i];
        if (query[i] == 1)
        {
            cin >> query2[i];
        }
    }
    for (int o = 0; o < Q; o++)
    {
        if (query[o] == 1)
        {
            A[query2[o] - 1]++;
        }
        else
        {
            for (int j = 0; j < N; j++)
            {
                if (A[j] != 0)
                {
                    A[j]--;
                }
            }
        }
        int result = 0;
        for (int k = 0; k < N; k++)
        {
            result ^= A[k];
        }
        cout << result << "\n";
    }
}
