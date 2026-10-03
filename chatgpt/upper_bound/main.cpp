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
    auto l = lower_bound(v.begin(), v.end(), X);
    auto r = upper_bound(v.begin(), v.end(), X);
    cout << r - l << "\n";
}
