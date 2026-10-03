#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    queue<int> q;
    for (int i = 0; i < Q; i++)
    {
        int a;
        int b;
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            q.push(b);
        }
        else if (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
    }
}
