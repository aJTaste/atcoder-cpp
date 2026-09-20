// abc473_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for (int i = 1; i < N; i++)
    {
        if (A[i - 1] == A[i])
        {
            count += 2 * A[i];
            i++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        count2 += A[i];
    }
    cout << count2 - count << "\n";
}
