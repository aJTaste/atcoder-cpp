#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S_;
    cin >> S_;
    stack<string> S;
    for (int i = 0; i < int(S_.size()); i++)
    {
        S.push(string(1, S_[i]));
    }
    map<string, int> p{{"(", 0}, {")", 0}};
    while (!S.empty())
    {
        p[S.top()]++;
        if (p["("] > p[")"])
        {
            cout << "No\n";
            return 0;
        }
        S.pop();
    }
    if (p["("] != p[")"])
    {
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
}
