// abc485_d
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
    long long counting = 0;
    if (N < 9)
    {
        cout << "0\n";
        return 0;
    }
    int imi = N + 1;
    vector<bool> have1(3, false);
    for (int i = 0; i < N; i++)
    {
        have1[S[i] - 'A'] = true;
        if (have1[0] && have1[1] && have1[2])
        {
            imi = i + 1;
            break;
        }
    }
    int jma = -1;
    vector<bool> have2(3, false);
    for (int j = N - 1; j >= 0; j--)
    {
        have2[S[j] - 'A'] = true;
        if (have2[0] && have2[1] && have2[2])
        {
            jma = j;
            break;
        }
    }
    if (imi > jma)
    {
        cout << "0\n";
        return 0;
    }
    vector<int> cnt(3, 0);
    int r = imi;
    for (int i = imi; i < jma; i++)
    {
        while (r < jma && (cnt[0] == 0 || cnt[1] == 0 || cnt[2] == 0))
        {
            cnt[S[r] - 'A']++;
            r++;
        }
        if (cnt[0] > 0 && cnt[1] > 0 && cnt[2] > 0)
        {
            counting += (jma - r + 1);
        }
        cnt[S[i] - 'A']--;
    }
    cout << counting << "\n";
}
