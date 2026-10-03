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
        if (s.count(x))
        {
            cout << "Yes\n";
            return 0;
        }
        s.insert(x);
    }
    cout << "No\n";
}
