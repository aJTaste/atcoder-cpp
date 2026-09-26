// abc477_c
#include <bits/stdc++.h>
using namespace std;
struct query
{
    int a;
    int b;
};
int main()
{
    int Q;
    string S;
    string T;
    cin >> Q;
    cin >> S;
    cin >> T;
    vector<query> qu(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> qu[i].a >> qu[i].b;
    }
    vector<int> aiueo;
    for (int i = 0; i + int(T.size()) <= int(S.size()); i++)
    {
        if (S.substr(i, T.size()) == T)
        {
            aiueo.push_back(i + 1);
        }
    }
    for (int i = 0; i < Q; i++)
    {

        int max_start = qu[i].b - T.size() + 1;

        auto it = lower_bound(aiueo.begin(), aiueo.end(), qu[i].a);

        if (it != aiueo.end() && *it <= max_start)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}
