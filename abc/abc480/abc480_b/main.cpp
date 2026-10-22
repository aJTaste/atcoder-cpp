#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int M;
    cin >> N >> M;
    vector<string> S(N);
    vector<string> T(M);
    vector<int> Sn(N, 0);
    for (auto &x : S)
    {
        cin >> x;
    }
    for (auto &x : T)
    {
        cin >> x;
    }
    for (auto &x : T)
    {
        int countingg = 0;
        int countinggg;
        bool ok = false;
        for (int i = 0; i < N; i++)
        {
            if (x == S[i])
            {
                Sn[i]++;
                ok = true;
                break;
            }
        }
        if (ok)
        {
            continue;
        }
        for (int i = 0; i < N; i++)
        {
            if (static_cast<int>(x.size()) == static_cast<int>(S[i].size()))
            {
                int counting = 0;
                for (int j = 0; j < static_cast<int>(S[i].size()); j++)
                {
                    if (x[j] != S[i][j])
                    {
                        counting++;
                    }
                }
                if (counting == 1)
                {
                    countingg++;
                    countinggg = i;
                }
            }
        }
        if (countingg == 1)
        {
            Sn[countinggg]++;
        }
    }
    for (auto &x : Sn)
    {
        cout << x << "\n";
    }
}
