// abc482_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> X(N);
    for (auto &x : X)
    {
        cin >> x;
    }
    for (int i = 0; i < N; i++)
    {
        int left = X[0];
        int right = X[N - 1];
        int now = X[i];
        int prev_ = (i == 0) ? X[0] : X[i - 1];
        int next_ = (i == N - 1) ? X[N - 1] : X[i + 1];
        cout << min((max(right - next_, now - left) + next_ - now) / 2,
                    (max(prev_ - left, right - now) + now - prev_) / 2)
             << "\n";
    }
}
