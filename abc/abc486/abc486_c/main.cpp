// abc486_c
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, K;
    string S;
    cin >> N >> K >> S;
    int counting = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'o')
        {
            if (i - K < 0 || S[i - K] == '.')
            {

                counting++;
            }
        }
    }
    cout << counting << "\n";
}
