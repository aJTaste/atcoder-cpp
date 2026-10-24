// abc1001_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    int counting = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (A[j] % A[i] == 0)
            {
                counting++;
            }
        }
    }
    cout << counting << "\n";
}
