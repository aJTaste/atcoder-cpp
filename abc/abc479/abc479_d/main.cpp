// abc479_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    long long Q;
    cin >> N >> Q;
    vector<long long> L(N, 0);
    vector<long long> R(N, 0);
    vector<long long> Lm(N);
    vector<long long> Rm(N);
    vector<long long> A(Q);
    for (long long i = 1; i < N; i++)
    {
        cin >> L[i];
    }
    Lm[N - 1] = L[N - 1];
    for (long long i = N - 2; i > 0; i--)
    {
        if (L[i] < Lm[i + 1])
        {
            Lm[i] = L[i];
        }
        else
        {
            Lm[i] = Lm[i + 1];
        }
    }
    for (long long i = 0; i < N - 1; i++)
    {
        cin >> R[i];
        if (i == 0)
        {
            Rm[i] = R[i];
        }
        else if (Rm[i - 1] > R[i])
        {
            Rm[i] = R[i];
        }

        else
        {
            Rm[i] = Rm[i - 1];
        }
    }
    for (long long i = 0; i < Q; i++)
    {
        long long s;
        long long t;
        cin >> s >> t;
        long long lc;
        long long rc;
        if (s < t)
        {
            rc = R[s - 1];
            if (s == 1)
            {
                A[i] = rc;
            }
            else
            {
                lc = L[s - 1] + Rm[s - 1];
                A[i] = min(rc, lc);
            }
        }
        else
        {
            lc = L[s - 1];
            if (s == N)
            {
                A[i] = lc;
            }
            else
            {
                rc = R[s - 1] + Lm[s];
                A[i] = min(rc, lc);
            }
        }
    }
    for (auto x : A)
    {
        cout << x << "\n";
    }
}
