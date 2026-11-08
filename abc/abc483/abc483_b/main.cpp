// abc483_b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    int Q;
    cin >> N >> Q;
    vector<int> num(N);
    iota(num.begin(), num.end(), 1);
    for (int i = 0; i < Q; i++)
    {
        int x;
        cin >> x;
        reverse(num.begin(), num.begin() + x);
        transform(num.begin(), num.begin() + x, num.begin(), [](int a) { return -a; });
    }
    for (auto &x : num)
    {
        cout << x << "\n";
    }
}
