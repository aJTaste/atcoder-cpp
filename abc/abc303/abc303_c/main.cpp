// abc303_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M, H, K;
    cin >> N >> M >> H >> K;
    string S;
    cin >> S;
    set<pair<int, int>> pos;
    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        pos.insert({x, y});
    }
    pair<int, int> now = {0, 0};
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'R')
        {
            now.first += 1;
        }
        if (S[i] == 'L')
        {
            now.first += -1;
        }

        if (S[i] == 'U')
        {
            now.second += 1;
        }

        if (S[i] == 'D')
        {
            now.second -= 1;
        }
        H -= 1;
        if (pos.contains(now))
        {
            if (H < K)
            {
                H = K;
                pos.erase(now);
            }
        }
        if (i == N - 1)
        {
            cout << "Yes\n";
            return 0;
        }

        if (H == 0)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}
