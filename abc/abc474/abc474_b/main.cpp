// abc474_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int count = 0;
    int count2 = 10;
    vector<int> P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    for (int i = 0; i < N; i++)
    {
        count++;
        if (count > count2)
        {
            count2 += 10;
        }
        if (P[i] > count2)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
}
