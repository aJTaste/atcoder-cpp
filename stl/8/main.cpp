#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int K;
    cin >> N;
    cin >> K;
    map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    vector<pair<int, int>> p;
    for (const auto &x : m)
    {
        if (x.second >= K)
        {
            p.push_back({x.first, x.second});
        }
    }
    sort(p.begin(), p.end(),
         [](const auto &a, const auto &b)
         {
             if (a.second != b.second)
             {
                 return a.second > b.second;
             }
             else
             {
                 return a.first < b.first;
             }
         });
    for (const auto &x : p)
    {
        cout << x.first << " " << x.second << "\n";
    }
}
