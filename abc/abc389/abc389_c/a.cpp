// abc389_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long Q;
    cin >> Q;
    queue<long long> qq;
    long long plus = 0;
    bool counting = false;
    long long temp = 0;
    for (long long i = 0; i < Q; i++)
    {
        long long x;
        cin >> x;
        if (x == 1)
        {
            if (counting == false)
            {
                qq.push(0);
            }
            else
            {
                qq.push(qq.back() + temp);
            }
            long long y;
            cin >> y;
            temp = y;
            counting = true;
        }
        else if (x == 3)
        {
            long long y;
            cin >> y;
            queue<long long> qqq = qq;
            for (long long j = 0; j < y - 1; j++)
            {
                qqq.pop();
            }
            cout << qqq.front() - plus << "\n";
        }
        else
        {
            queue<long long> qqqq = qq;
            qqqq.pop();
            plus = qqqq.front();
            qq.pop();
        }
    }
}
