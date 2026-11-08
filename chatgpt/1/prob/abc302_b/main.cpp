#include <bits/stdc++.h>
using namespace std;
int N;
int M;
vector<int> v;
vector<bool> used;
int count_;
vector<string> S;
string ans = "No\n";
void loop()
{
    if (count_ == 0)
    {
        bool which = true;
        for (int i = 0; i < N - 1; i++)
        {
            int counting = 0;
            for (int j = 0; j < M; j++)
            {
                if (S[v[i]][j] != S[v[i + 1]][j])
                {
                    counting++;
                }
            }
            if (counting != 1)
            {
                which = false;
                break;
            }
        }
        if (which == true)
        {
            ans = "Yes";
        }
        return;
    }
    for (int i = 0; i < N; i++)
    {
        if (!used[i])
        {
            v[N - count_] = i;
            used[i] = true;
            count_--;
            loop();
            count_++;
            used[i] = false;
        }
    }
}
int main()
{
    cin >> N >> M;
    S.resize(N);
    for (auto &x : S)
    {
        cin >> x;
    }
    v.resize(N);
    used.resize(N, false);
    count_ = N;
    loop();
    cout << ans << "\n";
}
