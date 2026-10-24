// abc1000_g
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    int M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    int counting = 0;
    for (auto &x : A)
    {
        cin >> x;
    }
    for (auto &x : B)
    {
        cin >> x;
    }
    for (auto &x : A)
    {
        for (auto &y : B)
        {
            if (x <= y)
            {
                counting++;
            }
        }
    }
    cout << counting << "\n";
}
