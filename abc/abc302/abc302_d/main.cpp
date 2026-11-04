// abc302_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, M, D;
    cin >> N >> M >> D;
    vector<long long> A(N);
    vector<long long> B(M);
    for (auto &x : A)
    {
        cin >> x;
    }
    for (auto &x : B)
    {
        cin >> x;
    }
    pair<long long, long long> max_ = {0, 0};
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (long long i = 0; i < N; i++)
    {
        auto it = upper_bound(B.begin(), B.end(), A[i] + D) - B.begin() - 1;
        if (it != B.begin())
        {
            if (A[i] + B[it] > max_.first + max_.second)
            {
                max_.first = A[i];
                max_.second = B[upper_bound(B.begin(), B.end(), A[i] + D) - B.begin() - 1];
            }
        }
    }
    cout << max_.first + max_.second << "\n";
}
