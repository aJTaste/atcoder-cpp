// abc303_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    string S, T;
    cin >> N >> S >> T;
    int counting = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == T[i])
        {
            counting++;
        }
        else if (S[i] == '0' || S[i] == 'o')
        {
            if (T[i] == '0' || T[i] == 'o')
            {
                counting++;
            }
        }
        else if (S[i] == '1' || S[i] == 'l')
        {
            if (T[i] == '1' || T[i] == 'l')
            {
                counting++;
            }
        }
    }
    cout << ((counting == N) ? "Yes\n" : "No\n");
}
