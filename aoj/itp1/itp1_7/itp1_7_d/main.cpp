// itp1_7_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long m;
    long long l;
    cin >> n >> m >> l;
    vector<vector<long long>> A(n, vector<long long>(m));
    vector<vector<long long>> B(m, vector<long long>(l));
    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }
    for (auto &x : B)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }
    for (long long i = 0; i < n; i++)
    {
        bool is = false;
        for (long long j = 0; j < l; j++)
        {
            long long ans = 0;
            for (long long k = 0; k < m; k++)
            {
                ans += A[i][k] * B[k][j];
            }
            if (is == false)
            {
                cout << ans;
                is = true;
            }
            else
            {
                cout << " " << ans;
            }
        }
        cout << "\n";
    }
}
