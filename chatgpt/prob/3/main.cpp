#include <bits/stdc++.h>
using namespace std;
void loop(int count, int num, vector<int> &v, vector<bool> &used)
{
    if (count == 0)
    {
        for (auto &x : v)
        {
            cout << x;
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < num; i++)
    {
        if (!used[i])
        {
            v[num - count] = i;
            used[i] = true;
            loop(count - 1, num, v, used);
            used[i] = false;
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    vector<bool> used(N, false);
    int count = N;
    loop(count, N, v, used);
}
