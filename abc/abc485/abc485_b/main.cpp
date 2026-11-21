// abc485_b
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    for (int i = 0; i < M; i++)
    {
        if (S[0][i] == 'x' && S[1][i] == 'x')
        {
            cout << "Drain " << i + 1 << "\n";
            return 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (S[i][0] == 'x' && S[i][1] == 'x')
        {
            cout << "Faucet " << i + 1 << "\n";
            return 0;
        }
    }
}
