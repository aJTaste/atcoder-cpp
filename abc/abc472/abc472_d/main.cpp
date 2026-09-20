// abc472_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H;
    int W;
    int K;
    cin >> H >> W >> K;
    vector<vector<string>> S(H, vector<string>(W));
    vector<string> T(H);
    vector<int> X;
    vector<int> Y;
    for (int a = 0; a < H; a++)
    {
        cin >> T[a];
        for (int b = 0; b < W; b++)
        {
            S[a][b] = T[a][b];
        }
    }
    for (int i = 0; i < H; i++)
    {
        if (auto it = find(S[i].begin(), S[i].end(), "#"); it == S[i].end())
        {
            Y.push_back(i);
        }
    }
    for (int j = 0; j < W; j++)
    {
    }
}
