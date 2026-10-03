// abc478_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    if (is_sorted(A.begin(), A.end()))
    {
        cout << "Yes\n";
        return 0;
    }
    else
    {
        int L;
        int R;
        for (int i = 0; i < N - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                L = i;
                break;
            }
        }
        for (int i = N - 1; i > 0; i--)
        {
            if (A[i] < A[i - 1])
            {
                R = i;
                break;
            }
        }
        if (R - L + 1 > K)
        {
            cout << "No\n";
            return 0;
        }
        int start_min = max(0, R - K + 1);
        int start_max = min(N - K, L);
        multiset<int> ms;
        for (int j = start_min; j < start_min + K; j++)
        {
            ms.insert(A[j]);
        }
        bool ok = false;
        for (int i = start_min; i <= start_max; i++)
        {
            int cur_min = *ms.begin();
            int cur_max = *ms.rbegin();
            bool valid = true;
            if (i > 0 && A[i - 1] > cur_min)
                valid = false;
            if (i + K < N && cur_max > A[i + K])
                valid = false;
            if (valid)
            {
                ok = true;
                break;
            }
            if (i < start_max)
            {
                ms.erase(ms.find(A[i]));
                ms.insert(A[i + K]);
            }
        }
        if (ok)
            cout << "Yes\n";
        else
            cout << "No\n";
        return 0;
    }
}
