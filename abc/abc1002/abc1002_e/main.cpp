// abc1002_e
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    string S;
    long long M;
    string T;
    long long K;
    cin >> N;
    cin >> S;
    cin >> M;
    cin >> T;
    cin >> K;
    string X;
    long long min_ = min(M, K);
    for (long long i = 0; i < min_; i++)
    {
        X += S;
    }
    if (X.contains(T))
    {
        cout << "Yes\n";
        return 0;
    }
    cout << "No\n";
}
