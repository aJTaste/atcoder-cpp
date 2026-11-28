// abc1004_e 諦め（他の年度のやつ解く）
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
constexpr long long INF = 4e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    vector<vector<int>> V(N + 1);
    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        V[A].push_back(B);
    }
    for (int i = 1; i <= N; i++)
    {
        vector<int> dist(N + 1, -1);
        queue<pair<int, int>> q; // 次に行く街/奇数偶数
        q.push({1, 1});
        while (q.empty())
        {
        }
    }
}
