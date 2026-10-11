// abc479_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    long long W;
    cin >> N >> W;
    vector<long long> A(N);
    vector<long long> B(N);
    long long max_ = 0;
    for (long long i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }
    for (long long i = 0; i < (1LL << N); i++)
    {
        long long tasty = 0;
        long long size = 0;
        for (long long j = 0; j < N; ++j)
        {
            if ((i >> j) & 1)
            {
                tasty += A[j];
                size += B[j];
            }
        }
        if (size <= W && tasty > max_)
        {
            max_ = tasty;
        }
    }
    cout << max_ << "\n";
}
