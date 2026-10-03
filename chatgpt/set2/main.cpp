#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto x : s)
    {
        cout << x << " ";
    }
}
