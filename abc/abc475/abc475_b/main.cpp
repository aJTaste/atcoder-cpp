// abc475_b
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
    vector<int> M(3);
    for (int i = 0; i < N; i++)
    {
        int aa = (1000 - (A[i] % 1000)) % 1000;
        for (;;)
        {
            if (aa < 100)
            {
                break;
            }
            aa -= 100;
            M[2]++;
        }
        for (;;)
        {
            if (aa < 10)
            {
                break;
            }
            aa -= 10;
            M[1]++;
        }
        for (;;)
        {
            if (aa < 1)
            {
                break;
            }
            aa -= 1;
            M[0]++;
        }
    }
    cout << M[0] << " " << M[1] << " " << M[2] << "\n";
}
