// abc300_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H;
    int W;
    cin >> H >> W;
    vector<string> A(H);
    vector<string> B(H);
    for (int i = 0; i < H; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < H; i++)
    {
        cin >> B[i];
    }
    for (int t = 0; t < H; t++)
    {
        for (int s = 0; s < W; s++)
        {
            bool ok = true;
            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < W; j++)
                {
                    if (A[(i + t) % H][(j + s) % W] != B[i][j])
                    {
                        ok = false;
                    }
                }
            }
            if (ok == true)
            {
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No";
}
