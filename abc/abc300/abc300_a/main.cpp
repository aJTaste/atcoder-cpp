// abc300_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int A;
    int B;
    cin >> N >> A >> B;
    vector<int> C(N);
    for (int i = 0; 0 < N; i++)
    {
        cin >> C[i];
        if (C[i] == A + B)
        {
            cout << i + 1 << "\n";
            return 0;
        }
    }
}
