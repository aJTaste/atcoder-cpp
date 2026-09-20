// B - Survey Tabulation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> SS(N);
    int mx = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
        std::transform(S[i].begin(), S[i].end(), S[i].begin(), [](unsigned char c)
                       { return std::tolower(c); });
        for (int j = 0; j <= i; j++)
        {
            if (S[i] == S[j])
            {
                SS[i]++;
            }
        }
        if (i == 0 || SS[i] > mx)
        {
            mx = SS[i];
        }
    }
    cout << mx << "\n";
}
