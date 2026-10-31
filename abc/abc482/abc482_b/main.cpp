// abc482_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> S(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> S[i];
    }
    int max_ = 0;
    for (int i = 0; i < 5; i++)
    {
        int counting = 0;
        for (int j = 0; j < 5; j++)
        {
            if (S[i][j] == 'o')
            {
                counting++;
            }
        }
        if (counting > max_)
        {
            max_ = counting;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        int counting = 0;
        for (int j = 0; j < 5; j++)
        {
            if (S[j][i] == 'o')
            {
                counting++;
            }
        }
        if (counting > max_)
        {
            max_ = counting;
        }
    }
    for (int i = 0; i < 1; i++)
    {
        int counting = 0;
        for (int j = 0; j < 5; j++)
        {
            if (S[j][j] == 'o')
            {
                counting++;
            }
            if (counting > max_)
            {
                max_ = counting;
            }
        }
    }
    for (int i = 0; i < 1; i++)
    {
        int counting = 0;
        for (int j = 0; j < 5; j++)
        {
            if (S[j][5 - j] == 'o')
            {
                counting++;
            }
            if (counting > max_)
            {
                max_ = counting;
            }
        }
    }
    cout << 5 - max_ << "\n";
}
