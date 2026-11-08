#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        m[x] += y;
    }
    vector<pair<int, int>> p;
    for (auto x : m)
    {
        p.push_back({x.first, x.second});
    }
    sort(p.begin(), p.end(), [](const auto &a, const auto &b)
         {
        if(a.second == b.second){
            return a.first < b.first;
        }
        else{
            return a.second > b.second;
        } });
    for (auto x : p)
    {
        cout << x.first << " " << x.second << "\n";
    }
}
