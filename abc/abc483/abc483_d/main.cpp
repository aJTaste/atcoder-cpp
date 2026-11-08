// abc483_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    vector<long long> A(N);
    vector<long long> B(N + 1, 0);
    for (long long i = 0; i < N; i++)
    {
        cin >> A[i];
        B[i + 1] = B[i] + A[i];
    }
    vector<long long> Lmax(N + 1);
    vector<long long> Lmin(N + 1);
    Lmax[0] = B[0];
    Lmin[0] = B[0];
    for (long long i = 1; i <= N; i++)
    {
        Lmax[i] = max(Lmax[i - 1], B[i]);
        Lmin[i] = min(Lmin[i - 1], B[i]);
    }
    long long ans = Lmax[N] - Lmin[N] + 1;
    long long Rmax = B[N];
    long long Rmin = B[N];
    for (long long i = N; i >= 1; i--)
    {
        Rmax = max(Rmax, B[i]);
        Rmin = min(Rmin, B[i]);
        long long Ai = A[i - 1];
        long long current_max = max(Lmax[i - 1], Rmax - 2 * Ai);
        long long current_min = min(Lmin[i - 1], Rmin - 2 * Ai);
        ans = max(ans, current_max - current_min + 1);
    }
    cout << ans << "\n";
}
