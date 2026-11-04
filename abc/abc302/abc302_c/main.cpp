// abc302_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<string> T(N);
    for (auto &x : T)
    {
        cin >> x;
    }
    sort(T.begin(), T.end());
    do
    {
        bool ok = true;
        for (int i = 0; i < N - 1; i++)
        {
            int counting = 0;
            for (int j = 0; j < M; j++)
            {
                if (T[i][j] != T[i + 1][j])
                {
                    counting++;
                }
            }
            if (counting != 1)
            {
                ok = false;
            }
        }
        if (ok)
        {
            cout << "Yes\n";
            return 0;
        }
    } while (next_permutation(T.begin(), T.end()));
    cout << "No\n";
}
