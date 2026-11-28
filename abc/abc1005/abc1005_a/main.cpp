// abc1005_a
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
    sort(A.begin(), A.end());
    for (int i = 0; i < N - 2; i++)
    {
        if (binary_search(A.begin(), A.end(), A[i] + 3) && binary_search(A.begin(), A.end(), A[i] + 6))
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}
