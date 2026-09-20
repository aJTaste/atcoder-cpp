// abc473_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    vector<int> C(K, 0);
    for (int i = 0; i < N; i++)
    {
        C[A[i] - 1]++;
    }
    int count = 0;
    int max_ = *max_element(C.begin(), C.end());
    for (int i = 0; i < K; i++)
    {
        if (max_ - C[i] <= 1)
        {
            count++;
        }
    }
    cout << count << "\n";
}
