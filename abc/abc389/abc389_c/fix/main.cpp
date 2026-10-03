#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    vector<long long> V;
    int count = 0;
    long long head = 0;
    int Y = 0;
    for (int i = 0; i < Q; i++)
    {
        int X;
        cin >> X;
        if (X == 1)
        {
            head += Y;
            V.push_back(head);
            cin >> Y;
        }
        if (X == 2)
        {
            count++;
        }
        if (X == 3)
        {
            int Z;
            cin >> Z;
            if (count == 0)
            {
                cout << V[Z - 1 + count] << "\n";
            }
            else
            {
                cout << V[Z - 1 + count] - V[count] << "\n";
            }
        }
    }
}
