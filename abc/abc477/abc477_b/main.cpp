// abc477_b
#include <bits/stdc++.h>
using namespace std;
struct a
{
    int first;
    int second;
};
int main()
{
    int N;
    int D;
    cin >> N >> D;
    int K = 0;
    vector<int> Y;
    vector<a> X(N, {0, 0});
    for (int i = 0; i < N; i++)
    {
        cin >> X[i].first;
        X[i].second = i;
    }
    sort(X.begin(), X.end(), [](const a &aa, const a &bb)
         {
        if (aa.first != bb.first)
        {
            return aa.first < bb.first;
        }
        return aa.second < bb.second; });
    for (int i = 0; i < N; i++)
    {
        if (i == 0 || i == N - 1)
        {
            if (i == 0 && abs(X[i].first - X[i + 1].first) >= D)
            {
                K++;
                Y.push_back(X[i].second);
            }
            if (i == N - 1 && abs(X[i].first - X[i - 1].first) >= D)
            {
                K++;
                Y.push_back(X[i].second);
            }
        }
        else
        {
            if (abs(X[i].first - X[i - 1].first) >= D && abs(X[i].first - X[i + 1].first) >= D)
            {
                K++;
                Y.push_back(X[i].second);
            }
        }
    }
    cout << K << "\n";
    sort(Y.begin(), Y.end());
    for (int i = 0; i < int(Y.size()); i++)
    {
        cout << Y[i] + 1 << " ";
    }
}
