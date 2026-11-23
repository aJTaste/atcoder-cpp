// 累積和無し縛り
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    int Q;
    cin >> Q;
    vector<int> Ans(Q);
    for (int i = 0; i < Q; i++)
    {
        int L, R, Sum;
        cin >> L >> R;
        Sum = 0;
        for (int j = L - 1; j < R; j++)
        {
            Sum += A[j];
        }
        Ans[i] = Sum;
    }
    for (auto &x : Ans)
    {
        cout << x << "\n";
    }
}
