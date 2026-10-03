#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    for (int i = 0; i < N; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}
