#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    stack<char> q;
    for (char c : S)
    {
        if (c == '(')
        {
            q.push(c);
        }
        else if (q.empty())
        {
            cout << "No\n";
            return 0;
        }
        else
        {
            q.pop();
        }
    }
    if (!q.empty())
    {
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
}
