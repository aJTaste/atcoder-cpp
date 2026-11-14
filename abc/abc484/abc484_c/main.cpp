// abc484_c
#include <bits/stdc++.h>
using namespace std;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    for (auto &x : B)
    {
        cin >> x;
    }
    int L = 0;
    int R = 0;
    while (L < N)
    {
        if (A[L] == B[L])
        {
            L++;
        }
        else
        {
            break;
        }
    }
    while (R < N)
    {
        if (A[N - R - 1] == B[N - R - 1])
        {
            R++;
        }
        else
        {
            break;
        }
    }
    if (L == N)
    {
        cout << "Yes\n";
        return 0;
    }
    int LL = L;
    int RR = N - R - 1;
    bool okk = (A[LL] == B[RR]);
    for (int k = LL; k < RR; k++)
    {
        if (A[k + 1] != B[k])
        {
            okk = false;
        }
    }
    bool okkk = (A[RR] == B[LL]);
    for (int k = LL; k < RR; k++)
    {
        if (A[k] != B[k + 1])
        {
            okkk = false;
        }
    }
    if (okk || okkk)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
