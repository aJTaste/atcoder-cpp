#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<int, int> A;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        A[a]++;
    }
    for (auto x : A)
    {
        cout << x.first << " " << x.second << "\n";
    }
}
