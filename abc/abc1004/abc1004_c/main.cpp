// abc1004_c
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
    cin >> N;
    string S;
    cin >> S;
    string T;
    int counting = 0;
    for (int i = 0; i < N; i++)
    {
        if (S.substr(i, 2) == "OI")
        {
            T += "OI";
            i++;
        }
        else if (S[i] == 'J')
        {
            counting++;
        }
        else
        {
            T.append(counting, 'J');
            counting = 0;
            T += S[i];
        }
    }
    T.append(counting, 'J');
    cout << T << "\n";
}
