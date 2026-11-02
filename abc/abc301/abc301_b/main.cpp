// abc301_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    for (int i = 0; i < N - 1; i++)
    {
        cout << A[i] << " ";
        int plus = (A[i] < A[i + 1]) ? 1 : -1;
        for (int j = A[i] + plus; j != A[i + 1]; j += plus)
        {
            cout << j << " ";
        }
    }
    cout << A[N - 1] << "\n";
}
