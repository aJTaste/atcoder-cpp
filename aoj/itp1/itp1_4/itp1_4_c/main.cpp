// itp1_4_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
    for (;;)
    {
        int a;
        int b;
        char op;
        cin >> a >> op >> b;
        if (op == '?')
        {
            break;
        }
        if (op == '+')
        {
            ans.push_back(a + b);
        }
        if (op == '-')
        {
            ans.push_back(a - b);
        }
        if (op == '*')
        {
            ans.push_back(a * b);
        }
        if (op == '/')
        {
            ans.push_back(a / b);
        }
    }
    for(auto &x : ans){
        cout << x << "\n";
    }
}
