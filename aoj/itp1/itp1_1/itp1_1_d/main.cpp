// itp1_1_d
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S;
    cin >> S;
    cout << S / 3600 << ":" << (S % 3600) / 60 << ":" << (S % 3600) % 60 << "\n";
}
