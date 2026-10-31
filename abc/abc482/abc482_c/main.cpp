// abc482_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long H, W, N, Q;
    cin >> H >> W >> N >> Q;
    vector<long long> tate(N);
    vector<long long> yoko(N);
    for (long long i = 0; i < N; i++)
    {
        cin >> tate[i] >> yoko[i];
    }
    sort(tate.begin(), tate.end());
    sort(yoko.begin(), yoko.end());
    vector<long long> ans(Q);
    for (long long i = 0; i < Q; i++)
    {
        long long x, l, r;
        cin >> x >> l >> r;
        if (x == 1)
        {
            cout << upper_bound(tate.begin(), tate.end(), r) -
                        lower_bound(tate.begin(), tate.end(), l)
                 << '\n';
        }
        else
        {
            cout << upper_bound(yoko.begin(), yoko.end(), r) -
                        lower_bound(yoko.begin(), yoko.end(), l)
                 << '\n';
        }
    }
}
