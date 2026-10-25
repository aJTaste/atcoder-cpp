// abc1001_f
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    long long X;
    long long Y;
    cin >> N >> X >> Y;
    vector<pair<long long, long long>> A(N);
    for (auto &x : A)
    {
        cin >> x.first;
    }
    for (auto &x : A)
    {
        cin >> x.second;
    }
    sort(A.begin(), A.end(),
         [](auto &a, auto &b) { return abs(a.first - a.second) > abs(b.first - b.second); });
    long long counting = 0;
    for (long long i = 0; i < N; i++)
    {
        if (A[i].first - A[i].second > 0)
        {
            if (X != 0)
            {
                X--;
                counting += A[i].first;
            }
            else
            {
                Y--;
                counting += A[i].second;
            }
        }
        else
        {
            if (Y != 0)
            {
                Y--;
                counting += A[i].second;
            }
            else
            {
                X--;
                counting += A[i].first;
            }
        }
    }
    cout << counting << "\n";
}
