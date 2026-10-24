// abc1000_i
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    vector<long long> A(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    vector<long long> B(N, 1);
    vector<long long> C(N + 1);
    C[0] = 0;
    for (long long i = 0; i < N; i++)
    {
        for (long long j = 2; A[i] % 2 == 0; j *= 2)
        {
            A[i] /= 2;
            B[i] = j;
        }
        C[i + 1] = B[i] + C[i];
    }
    long long Q;
    cin >> Q;
    for (long long i = 0; i < Q; i++)
    {
        long long X;
        cin >> X;
        cout << A[lower_bound(C.begin(), C.end(), X) - C.begin() - 1] << "\n";
    }
}
