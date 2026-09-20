// abc472_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> L(N);
    for (int a = 0; a < N; a++)
    {
        cin >> L[a];
    }
    int min_ = 1000000;
    for (int i = 0; i < N - 1; i++)
    {
        int left = 0;
        int right = 0;
        for (int j = 0; j < i + 1; j++)
        {
            left += L[j];
        }
        right = accumulate(L.begin(), L.end(), 0) - left;
        if (abs(left - right) < min_)
        {
            min_ = abs(left - right);
        }
    }
    cout << min_ << "\n";
}
