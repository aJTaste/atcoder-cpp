// abc482_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    vector<long long> X(N);
    for (auto &x : X)
    {
        cin >> x;
    }
    vector<long long> left_max(N, 0);
    vector<long long> right_max(N, 0);
    for (long long i = 1; i < N; i++)
    {
        left_max[i] = max(left_max[i - 1], X[i] - X[i - 1]);
    }
    for (long long i = N - 2; i >= 0; i--)
    {
        right_max[i] = max(right_max[i + 1], X[i + 1] - X[i]);
    }
    vector<long long> left_time(N, 0);
    vector<long long> right_time(N, 0);
    long long cur_left = 0;
    for (long long i = 0; i < N; i++)
    {
        if (i > 0)
        {
            cur_left = max(cur_left + (X[i] - X[i - 1]), X[i] - X[0]);
        }
        left_time[i] = cur_left;
    }
    long long cur_right = 0;
    for (long long i = N - 1; i >= 0; i--)
    {
        if (i < N - 1)
        {
            cur_right = max(cur_right + (X[i + 1] - X[i]), X[N - 1] - X[i]);
        }
        right_time[i] = cur_right;
    }
    for (long long i = 0; i < N; i++)
    {
        long long ans = max(left_time[i], right_time[i]) / 2;
        cout << ans << "\n";
    }
}
