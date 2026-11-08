#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    int max_ = 0;
    for (int i = 0; i < N; i++)
    {
        if (v[i].first > v[max_].first)
        {
            max_ = i;
        }
    }
    cout << v[max_].first << " " << v[max_].second << "\n";
}
