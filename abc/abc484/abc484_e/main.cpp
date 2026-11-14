// abc484_e
// longlong変換忘れるな

// longlong変換忘れるな

// longlong変換忘れるな

// なんでfよりわかんないの俺は
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, L, R;
    cin >> N >> L >> R;
    vector<int> A(N);
    vector<int> sum(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        sum[i + 1] = sum[i] + A[i];
    }
}
