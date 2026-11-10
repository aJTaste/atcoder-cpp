// abc303_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(M, vector<int>(N));
    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }
    int counting = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            bool ok = false;
            for (int k = 0; k < M; k++)
            {
                for (int l = 0; l < N - 1; l++)
                {
                    if (A[k][l] == i && A[k][l + 1] == j)
                    {
                        ok = true;
                    }
                    if (A[k][l] == j && A[k][l + 1] == i)
                    {
                        ok = true;
                    }
                }
            }
            if (!ok)
            {
                counting++;
            }
        }
    }
    cout << counting << "\n";
}
