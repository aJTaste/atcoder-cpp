// abc481_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    int M;
    int S;
    int T;
    cin >> N >> M >> S >> T;
    vector<vector<int>> A(N + 1, vector<int>());
    vector<int> min_planet(N + 1, 10000000);
    for (int i = 0; i < M; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        A[x].push_back(y);
        if (y < min_planet[x])
        {
            min_planet[x] = y;
        }
    }
    deque<int> q;
    int p;
    vector<int> dist(N + 1, -1);
    q.push_back(S);
    dist[S] = 0;
    while (!q.empty())
    {
        p = q.front();
        q.pop_front();
        for (int i = 0; i < static_cast<int>(A[p].size()); i++)
        {
            int plus = (A[p][i] == min_planet[p]) ? 0 : 1;
            if (dist[A[p][i]] == -1 || dist[p] + plus < dist[A[p][i]])
            {
                if (A[p][i] == min_planet[p])
                {
                    q.push_front(A[p][i]);
                    dist[A[p][i]] = dist[p];
                }
                else
                {
                    q.push_back(A[p][i]);
                    dist[A[p][i]] = dist[p] + 1;
                }
            }
        }
    }
    cout << dist[T] << "\n";
}
