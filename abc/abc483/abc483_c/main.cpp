// abc483_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    vector<int> Ns(N + 1, 0);
    vector<vector<int>> Ns2(N + 1);
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
        Ns[A[i]]++;
        Ns2[A[i]].push_back(B[i]);
    }
}
