// abc479_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int counting = 0;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if ((i + 1) % 2 == 1)
        {
            counting += x;
        }
    }
    cout << counting << "\n";
}
