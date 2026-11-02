// abc301_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    string S;
    cin >> S;
    int counting = 0;
    string w = "A";
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'T')
        {
            counting++;
        }
        if (i != N - 1 && counting == N / 2)
        {
            w = "T";
        }
    }
    if (counting > N / 2)
    {
        cout << "T\n";
    }
    else if (counting == N / 2)
    {
        cout << w << "\n";
    }
    else
    {
        cout << "A";
    }
}
