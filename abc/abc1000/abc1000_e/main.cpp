// abc1000_e
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int counting = 0;
    for (int i = 0; i < N; i++)
    {
        char S;
        cin >> S;
        if (S == 'o')
        {
            counting += 1;
        }
        else
        {
            counting += 2;
        }
    }
    cout << counting << "\n";
}
