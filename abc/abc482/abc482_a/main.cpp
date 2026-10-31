// abc482_a
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin >> S;
    int counting = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'o')
        {
            counting++;
        }
    }
    if (counting % 2 == 0)
    {
        cout << "even\n";
        return 0;
    }
    cout << "odd\n";
}
