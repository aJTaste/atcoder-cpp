// abc478_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int V;
    cin >> N >> V;
    vector<int> W(N);
    for (auto &x : W)
    {
        cin >> x;
    }
    int max_ = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (i + 1 + j + 1 + k + 1 <= V && i != j && j != k && i != k)
                {
                    if (W[i] + W[j] + W[k] >= max_)
                    {
                        max_ = W[i] + W[j] + W[k];
                    }
                }
            }
        }
    }
    cout << max_ << "\n";
}
