// abc1001_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> A(32);
    for (auto &x : A)
    {
        cin >> x;
    }
    auto b = max_element(A.begin(), A.begin() + 16);
    auto c = max_element(A.begin() + 16, A.end());
    auto d = (*b < *c) ? b : c;
    cout << d - A.begin() + 1 << "\n";
}
