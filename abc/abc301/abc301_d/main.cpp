// abc301_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    long long N;
    cin >> S >> N;
    long long size_ = static_cast<long long>(S.size());
    long long num = 0;
    for (long long i = 0; i < size_; i++)
    {
        num <<= 1;
        if (S[i] == '1')
        {
            num |= 1;
        }
    }
    if (num > N)
    {
        cout << -1 << "\n";
        return 0;
    }
    for (long long i = 0; i < size_; i++)
    {
        if (S[i] == '?')
        {
            long long plus = 1LL << (size_ - 1 - i);
            if (num + plus <= N)
            {
                num += plus;
            }
        }
    }
    cout << num << "\n";
}
