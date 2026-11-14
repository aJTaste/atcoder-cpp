// abc304_a
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> A(N);
    long long min_ = INF;
    int min__;
    for (int i = 0; i < N; i++)
    {
        cin >> S[i] >> A[i];
        if (A[i] < min_)
        {
            min__ = i;
            min_ = A[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << S[(i + min__) % N] << "\n";
    }
}
