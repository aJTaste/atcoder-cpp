// abc1000_h
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<bool> A(200000, false);
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        A[x - 1] = true;
    }
    for (int i = 0; i < 200000 - 6; i++)
    {
        if (A[i] && A[i + 3] && A[i + 6])
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}
