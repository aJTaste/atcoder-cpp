// abc301_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S, T;
    cin >> S >> T;
    set<char> atcoder;
    for (auto &x : "atcoder")
    {
        atcoder.insert(x);
    }
    int size_ = static_cast<int>(S.size());
    int salpha = 0, talpha = 0;
    for (int i = 0; i < size_; i++)
    {
        if (S[i] == '@')
        {
            salpha++;
        }
    }
    for (int i = 0; i < size_; i++)
    {
        if (T[i] == '@')
        {
            talpha++;
        }
    }
    bool ok = true;
    for (char c = 'a'; c <= 'z'; c++)
    {
        int sc = 0, tc = 0;
        for (auto &x : S)
        {
            if (x == c)
            {
                sc++;
            }
        }
        for (auto &x : T)
        {
            if (x == c)
            {
                tc++;
            }
        }
        if (sc != tc && !atcoder.count(c))
        {
            ok = false;
        }
        if (sc > tc)
        {
            talpha -= sc - tc;
        }
        else
        {
            salpha -= tc - sc;
        }
    }
    if (talpha < 0 || salpha < 0)
    {
        ok = false;
    }
    cout << ((ok) ? "Yes\n" : "No\n");
}
