// abc486_a
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
    string S;
    cin >> N >> S;
    vector<string> ans(N);
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'A')
        {
            ans[i] = "Alpha ";
        }
        else if (S[i] == 'B')
        {
            ans[i] = "Bravo ";
        }
        else
        {
            ans[i] = "Charlie ";
        }
    }
    for (auto &x : ans)
    {
        cout << x;
    }
}
