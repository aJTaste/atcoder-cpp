// abc473_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int count = 0;
    for (int i = N / 2; i < N; i++)
    {
        count += A[i];
    }
    cout << count << "\n";
}
