#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    for (auto &x : v)
    {
        cin >> x;
    }
    sort(v.begin(), v.end(), [](int a, int b)
         { return a % 2 < b % 2; });
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
}
