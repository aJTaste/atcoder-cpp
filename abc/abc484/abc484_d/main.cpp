// abc484_d
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
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
    vector<long long> counting(N + 1, 0);
    long long ans = 1;
    for (long long i = 0; i < N; i++)
    {
        if (i == 0 || A[i] != A[i - 1])
        {
            ans += i - counting[A[i]];
        }
        counting[A[i]]++;
    }
    cout << ans << "\n";
}
