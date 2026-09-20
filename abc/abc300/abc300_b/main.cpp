// abc300_b
// 途中
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H;
    int W;
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
    for (int i = 0; i < W; i++)
    {
        int a = 0;
    }
    for (int i = 0; i < H; i++)
    {
        rotate(A[i].begin(), A[i].begin() + 1, A[i].end());
    }
}
