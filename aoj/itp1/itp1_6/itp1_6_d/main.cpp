// itp1_6_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m, 0));
    vector<int> B(m);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            A[i][j] = x;
        }
    }
    for (auto &x : B)
    {
        cin >> x;
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += A[i][j] * B[j];
        }
        ans.push_back(sum);
    }
    for (auto &x : ans)
    {
        cout << x << "\n";
    }
}
