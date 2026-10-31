// abc300_d
// 途中
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    vector<long long> pn;
    vector<bool> pnb(300000, true);
    pnb[0] = false;
    pnb[1] = false;
    for (long long i = 2; i * i < 300000; i++)
    {
        if (pnb[i])
        {
            for (long long j = i * i; j < 300000; j += i)
            {
                pnb[j] = false;
            }
        }
    }
    for (long long i = 2; i < 300000; i++)
    {
        if (pnb[i])
        {
            pn.push_back(i);
        }
    }
    long long counting = 0;
    for (long long i = 0; i < static_cast<long long>(pn.size()) - 2; i++)
    {
        bool iss = false;
        for (long long j = i + 1; j < static_cast<long long>(pn.size()) - 1; j++)
        {
            bool is = false;
            for (long long k = j + 1; k < static_cast<long long>(pn.size()); k++)
            {
                if (pn[i] * pn[i] <= N / pn[j] / pn[k] / pn[k])
                {
                    counting++;
                }
                else if (k == j + 1)
                {
                    is = true;
                    break;
                }
                else
                {
                    break;
                }
            }
            if (is)
            {
                if (j == i + 1)
                {
                    iss = true;
                }
                break;
            }
        }
        if (iss)
        {
            break;
        }
    }
    cout << counting << "\n";
}
