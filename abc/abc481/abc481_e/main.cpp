// abc481_e
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    vector<int> ans(T);
    for (int i = 0; i < T; i++)
    {
        int N;
        vector<int> X(N);
        vector<int> Y(N);
        vector<int> theta(N);
        for (int j = 0; j < N; i++)
        {
            int x;
            int y;
            cin >> x >> y;
            theta[j] = atan2(x, y);
        }
        sort(theta.begin(), theta.end());
        int max_ = 0;
        for (int j = 0; j < N; j++)
        {
        }
    }
}
