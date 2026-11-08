#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> p(N);
    for (int i = 0; i < N; i++)
    {
        cin >> p[i].first;
        cin >> p[i].second;
    }
    cout << p[0].first << " " << p[0].second << "\n";
}
