// abc476_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    string S;
    string T;
    cin >> N;
    cin >> S;
    cin >> T;
    for (int i = 0; i < N; i++)
    {
        if (T[i] != S[i] && T[i] != '*')
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}
