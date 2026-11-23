// abc1004_a
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
    sort(A.begin(), A.end(), greater<>());
    long long min_ = INF;
    int min_2;
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            continue;
        }
        int up_num = i + 1;
        int down_num = N - up_num;
        int diff = abs(up_num - down_num);
        if (diff < min_)
        {
            min_ = diff;
            min_2 = A[i];
        }
    }
    cout << min_2 << "\n";
}
