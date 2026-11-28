// abc486_b
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        *find(A.begin(), A.end(), x) = y;
    }
    sort(A.begin(), A.end());
    for (auto &x : A)
    {
        cout << x << " ";
    }
}
