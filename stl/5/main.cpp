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
        if (x == 1)
        {
            int y;
            cin >> y;
            q.push(y);
        }
        else
        {
            cout << q.front() << "\n";
            q.pop();
        }
    }
}
