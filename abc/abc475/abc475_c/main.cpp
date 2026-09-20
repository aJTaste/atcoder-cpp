// abc475_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int S;
    long long L;
    cin >> N >> S >> L;
    vector<long long> A(N);
    vector<long long> B(N + 2);
    long long counting = 0;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> A[i];
        counting += A[i];
        B[i + 2] = counting;
    }
    int count = 1;
    for (int i = S; i >= 1; i--)
    {
        for (int j = S; j <= N; j++)
        {
            if (B[j] - B[i] + min(B[S] - B[i], B[j] - B[S]) <= L && (j - i + 1) > count)
            {
                count = (j - i + 1);
            }
        }
    }
    cout << count << "\n";
}
