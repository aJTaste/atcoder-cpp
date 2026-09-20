// abc472_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int M;
    long long K;
    cin >> N >> M >> K;
    vector<long long> A(N);
    vector<int> B(N, 0);
    for (int a = 0; a < N; a++)
    {
        cin >> A[a];
    }
    long long cal = 0;
    for (int i = 0; i < N; i++)
    {
        if (i >= M && B[i - M] == 1)
        {
            cal -= A[i - M];
        }
        if (A[i] + cal <= K)
        {
            cout << "Yes\n";
            cal += A[i];
            B[i] = 1;
        }
        else
        {
            cout << "No\n";
        }
    }
}
