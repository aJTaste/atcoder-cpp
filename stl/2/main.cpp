#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    set<int> S;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if (S.count(x))
        {
            cout << "Yes\n";
            return 0;
        }
        S.insert(x);
    }
    cout << "No\n";
}
