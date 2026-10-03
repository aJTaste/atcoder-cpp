#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int X;
    cin >> N >> X;
    vector<int> A(N);
    for (auto &x : A)
    {
        cin >> x;
    }
    auto l = lower_bound(A.begin(), A.end(), X);
    auto r = upper_bound(A.begin(), A.end(), X);
    cout << l - A.begin() << " " << r - A.begin() << "\n";
}
