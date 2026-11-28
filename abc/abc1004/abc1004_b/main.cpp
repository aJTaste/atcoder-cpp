// abc1004_b
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    vector<long long> A(N);
    for (long long i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    long long ans = 0;
    long long mod;
    for (long long i = 0; i < N - 1; i++)
    {
        ans += A[i] / 3;
        mod = A[i] % 3;
        if (A[i + 1] + mod >= 3)
        {
            ans++;
            A[i + 1] -= 3 - mod;
        }
    }
    ans += A[N - 1] / 3;
    cout << ans << "\n";
}
