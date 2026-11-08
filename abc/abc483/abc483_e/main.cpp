// abc483_e
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (auto &x : S)
    {
        cin >> x;
    }
    long long same = 0;
    long long same1 = 0;
    long long same2 = 0;
    unordered_map<string, long long> map0;
    for (long long i = 0; i < N; i++)
    {
        map0[S[i]]++;
    }
    for (auto const &[key, val] : map0)
    {
        same += val * (val - 1) / 2;
    }
    for (long long i = 0; i < M; i++)
    {
        unordered_map<string, long long> map1;
        for (long long j = 0; j < N; j++)
        {
            string T = S[j];
            T[i] = '*';
            map1[T]++;
        }
        for (auto const &[key, val] : map1)
        {
            same1 += val * (val - 1) / 2;
        }
    }
    for (long long i = 0; i < M; i++)
    {
        for (long long j = i + 1; j < M; j++)
        {
            unordered_map<string, long long> map2;
            for (long long k = 0; k < N; k++)
            {
                string T = S[k];
                T[i] = '*';
                T[j] = '*';
                map2[T]++;
            }
            for (auto const &[key, val] : map2)
            {
                same2 += val * (val - 1) / 2;
            }
        }
    }
    cout << same2 - (M - 1) * same1 + (long long)M * (M - 1) / 2 * same << "\n";
}
