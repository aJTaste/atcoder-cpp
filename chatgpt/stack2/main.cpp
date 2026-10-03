#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S_;
    cin >> S_;
    stack<char> S;
    for (char c : S_)
    {
        if (c == '(')
        {
            S.push(c);
        }
        else
        {
            if (S.empty())
            {
                cout << "No\n";
                return 0;
            }
            S.pop();
        }
    }
    if (S.empty())
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
