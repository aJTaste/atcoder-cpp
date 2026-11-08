#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    stack<int> s;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < N; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
}
