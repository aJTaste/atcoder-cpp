// B - Monocolor
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> C(N);
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
    }
    unordered_map<int, int> count;
    for (int num : C)
    {
        count[num]++;
    }
    int max_count = 0;
    for (const auto &pair : count)
    {
        if (pair.second > max_count)
        {
            max_count = pair.second;
        }
    }
    cout << N - max_count << "\n";
}
