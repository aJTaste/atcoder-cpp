//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string N;
    int count = 0;
    cin >> N;
    for (int i = 1; i < N.size(); i++)
    {
        if (N[i - 1] <= N[i])
        {
            count++;
        }
    }
    if (count == 0)
    {

        cout << "Yes\n";
    }
    else
    {

        cout << "No\n";
    }
}
