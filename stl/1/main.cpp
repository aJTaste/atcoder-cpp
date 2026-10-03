#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<int, int> A;
    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;
        A[X]++;
    }
    for (auto x : A)
    {
        cout << x.first << " " << x.second << "\n";
    }
}
