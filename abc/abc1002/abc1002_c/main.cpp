// abc1002_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    int L;
    int R;
    int counting = 0;
    cin >> N >> L >> R;
    for (int i = 0; i < N; i++)
    {
        int H;
        string A;
        cin >> H >> A;
        if (L <= H && H <= R && A == "Yes")
        {
            counting++;
        }
    }
    cout << counting << "\n";
}
