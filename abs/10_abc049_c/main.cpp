// ABC049C - 白昼夢
// 17:24~17:52 18:32~19:12 19:35~19:53
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string judge = "NO";
    vector<string> add{"dream", "dreamer", "erase", "eraser"};
    cin >> s;
    string s2 = s;
    for (int j = 0; j < s2.size() / 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            if (s.size() >= add[i].size())
            {
                if (s.substr(s.size() - add[i].size()) == add[i])
                {
                    s.erase(s.size() - add[i].size());
                    if (s == "")
                    {
                        judge = "YES";
                        break;
                    }
                }
            }
        }
    }
    cout << judge << endl;
}
