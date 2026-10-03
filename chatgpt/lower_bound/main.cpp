#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    int X;
    cin >> X;
    auto it = lower_bound(v.begin(), v.end(), X);
    if (it == v.end())
    {
        cout << "-1\n";
    }
    else
    {
        cout << it - v.begin() << "\n";
    }
}
