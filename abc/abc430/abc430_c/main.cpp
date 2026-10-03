// abc430_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int A;
    int B;
    string S;
    cin >> N >> A >> B;
    cin >> S;
    int j_ = 0;
    int count = 0;
    vector<int> a_(N + 1, 0);
    vector<int> b_(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        a_[i + 1] = a_[i] + (S[i] == 'a');
        b_[i + 1] = b_[i] + (S[i] == 'b');
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = j_; j < N; j++)
        {
            if (a_[j + 1] >= A)
            {
                j_ = j;
            }

        }
    }
}
