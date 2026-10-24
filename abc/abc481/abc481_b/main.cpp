// abc481_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    int K;
    cin >> N >> K;
    int counting = 0;
    vector<int> A(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    if (A[0] == K)
    {
        counting++;
    }
    for (int i = 1; i < N; i++)
    {
        if (min(A[i - 1], A[i]) < K && max(A[i - 1], A[i]) > K)
        {
            counting++;
        }
        else if (A[i] == K)
        {
            counting++;
        }
    }
    cout << counting << "\n";
}
