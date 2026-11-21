// abc485_c
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr int INF = 1e9;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> C(N);
    for (auto &x : C)
    {
        cin >> x;
    }
    vector<int> ans(N, INF);
    pair<int, int> a1, a2, b1, b2;
    a1 = a2 = b1 = b2 = {-1, -1};
    for (int i = 0; i < N; i++)
    {
        if (C[i] != a1.first)
        {
            if (a1.first != -1)
            {
                ans[i] = 1;
            }
            a2 = a1;
            a1 = {C[i], i};
        }
        else
        {
            if (a2.first != -1)
            {
                ans[i] = i - a2.second;
            }
            a1 = {C[i], i};
        }
    }
    for (int i = N - 1; i >= 0; i--)
    {
        if (C[i] != b1.first)
        {
            if (b1.first != -1)
            {
                ans[i] = 1;
            }
            b2 = b1;
            b1 = {C[i], i};
        }
        else
        {
            if (b2.first != -1)
            {
                ans[i] = min(ans[i], b2.second - i);
            }
            b1 = {C[i], i};
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << ans[i] << (i == N - 1 ? "\n" : " ");
    }
}
