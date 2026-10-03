// abc389_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long Q;
    cin >> Q;
    vector<long long> qq;
    long long plus = 0;
    bool counting = false;
    bool sukunai = true;
    long long temp = 0;
    long long temp2;
    long long count;
    for (long long i = 0; i < Q; i++)
    {
        long long x;
        cin >> x;
        if (x == 1)
        {
            if (counting == false)
            {
                qq.push_back(0);
            }
            else
            {
                qq.push_back(qq.back() + temp);
            }
            long long y;
            cin >> y;
            temp = y;
            counting = true;
            if (sukunai)
            {
                temp2 = y;
            }
        }
        else if (x == 3)
        {
            long long y;
            cin >> y;
            cout << qq[y - 1 + count] - plus << "\n";
        }
        else
        {
            count++;
            if (sukunai == true)
            {
                plus = temp2;
            }
            else
            {
                plus = qq[count];
            }
        }
        if (qq.size() == 1)
        {
            sukunai = true;
        }
        else
        {
            sukunai = false;
        }
    }
}
