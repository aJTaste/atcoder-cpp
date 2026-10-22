// abc480_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    long long Q;
    cin >> N >> Q;
    vector<long long> A(N);
    vector<long long> Br1(N);
    vector<long long> Br2(N);
    vector<long long> ans(Q);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (i == 0)
        {
            Br1[i] = A[i];
        }
        else
        {
            Br1[i] = A[i] + Br1[i - 1];
        }
    }
    Br2[0] = Br1[0];
    for (int i = 1; i < N; i++)
    {
        Br2[i] = Br1[i] + Br1[i - 1];
    }
    for (long long i = 0; i < Q; i++)
    {
        long long l;
        long long r;
        cin >> l >> r;
        long long lsum;
        long long rsum;
        lsum = ;
        rsum = ;
        ans[i] = lsum - rsum;
    }
    for (auto &x : ans)
    {
        cout << x << "\n";
    }
}
