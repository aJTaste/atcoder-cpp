// abc476_c
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    priority_queue<int, vector<int>, greater<int>> B;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    B.push(A[0]);
    B.push(A[1]);
    B.push(A[2]);
    cout << B.top() << "\n";

    for (int i = 3; i < N; i++)
    {
        B.push(A[i]);
        B.pop();
        cout << B.top() << "\n";
    }
}
