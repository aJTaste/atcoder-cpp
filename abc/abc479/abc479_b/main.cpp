// abc479_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    string S;
    cin >> N >> S;
    int counting = 0;
    int max_ = 0;
    bool is = false;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'S')
        {
            is = false;
        }
        else if (S[i] == 'R' && is == true)
        {
            counting++;
        }
        else
        {
            is = true;
            counting = 1;
        }
        if (max_ < counting)
        {
            max_ = counting;
        }
    }
    cout << max_ << "\n";
}
