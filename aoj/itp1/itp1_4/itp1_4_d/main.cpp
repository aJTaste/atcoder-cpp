// itp1_4_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    cout << *min_element(a.begin(), a.end()) << " " << *max_element(a.begin(), a.end()) << " "
         << accumulate(a.begin(), a.end(), 0LL) << "\n";
}
