// abc300_d
// 途中
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int count = 0;
    vector<int> pn;
    pn.push_back(2);
    pn.push_back(3);
    for (int i = 6; i <= N; i += 6)
    {
        bool a = true;
        bool b = true;
        for (int j = 0; j < static_cast<int>(pn.size()); j++)
        {
            if ((i - 1) % pn[j] == 0)
            {
                a = false;
            }
            if ((i + 1) % pn[j] == 0)
            {
                b = false;
            }
        }
        if (a == true)
        {
            pn.push_back(i - 1);
        }
        if (b == true)
        {
            pn.push_back(i + 1);
        }
    }
    int s = static_cast<int>(pn.size());
    for (int i = 0; i < s - 2; i++)
    {
        for (int j = i + 1; j < s - 1; j++)
        {
            for (int k = j + 1; k < s; k++)
            {
                if (pn[i] * pn[i] * pn[j] * pn[k] * pn[k] <= N)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            break;
        }
        break;
    }
    cout << count << "\n";
}
