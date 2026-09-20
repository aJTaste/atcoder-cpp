// abc474_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int Q;
    cin >> N >> Q;
    vector<int> P(N);
    vector<int> a(Q);
    int max_val = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
        max_val = max(max_val, P[i]);
    }
    for (int i = 0; i < Q; i++)
    {
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }
    vector<int> time(max_val + 1);
    for (int i = 0; i < N; i++)
    {
        time[P[i]] = i;
    }
    for (int i = 0; i < Q; i++)
    {
        time[a[i]] = N + i;
    }
    sort(P.begin(), P.end(), [&](int x, int y)
    {
        return time[x] < time[y];
    });
    for(int i = 0;i<N;i++){
        cout << P[i] << " ";
    }
}
