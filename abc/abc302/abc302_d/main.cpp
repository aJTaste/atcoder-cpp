// abc302_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, M, D;
    cin >> N >> M >> D;
    vector<long long> A(N);
    vector<long long> B(M);
    for (auto &x : A)
    {
        cin >> x;
    }
    for (auto &x : B)
    {
        cin >> x;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    while (true)
    {
        if (A.empty() || B.empty())
        {
            cout << -1 << "\n";
            return 0;
        }
        if (abs(A.back() - B.back()) > D)
        {
            if (A.back() > B.back())
            {
                A.pop_back();
            }
            else
            {
                B.pop_back();
            }
        }
        else
        {
            cout << A.back() + B.back() << "\n";
            return 0;
        }
    }
}
