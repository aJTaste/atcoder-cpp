// abc1002_f
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    vector<long long> A(N);
    vector<long long> B(N);
    vector<long long> C(N + 1, 0);
    for (long long i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }
    C[1] = B[0];
    for (long long i = 2; i <= N; i++)
    {
        C[i] = max(C[i - 1] + B[i - 1], C[i - 2] + A[i - 2] + A[i - 1]);
    }
    cout << C[N] << "\n";
}
