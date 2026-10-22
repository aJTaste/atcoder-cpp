// abc480_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N, K, T;
    cin >> N >> K >> T;
    vector<long long> A(N);
    for (long long i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    long long ans = 0;
    long long now = 0;
    for (long long i = 0; i < N; i++)
    {
        if (A[i] > T)
            break;
        if (A[i] > now)
        {
            long long gap = A[i] - now;
            long long need = (gap + K - 1) / K;
            ans += need;
            now += need * K;
        }
        now = max(now, A[i] + K);
    }
    if (now < T)
    {
        long long gap = T - now;
        ans += (gap + K - 1) / K;
    }
    cout << ans << "\n";
}
