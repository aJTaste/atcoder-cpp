#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<int> A;
void solve(int pos, int remaining)
{
    // 全ての位置(A_1〜A_N)を決め終わった
    if (pos == N)
    {
        if (remaining == 0)
        {
            // 残りがちょうど0 = 条件(Σi×A_i=K)を満たす → 出力
            for (int i = 0; i < N; i++)
            {
                cout << A[i] << (i + 1 < N ? " " : "\n");
            }
        }
        return; // ← ここが前回抜けていた「探索を打ち切る」return
    }

    int coef = pos + 1;          // 位置posの係数(i)。0-indexedなので+1
    int maxV = remaining / coef; // これ以上大きい値を試すと絶対remainingがマイナスになる上限

    for (int v = 0; v <= maxV; v++)
    {
        A[pos] = v;                           // この位置の値を記録
        solve(pos + 1, remaining - coef * v); // その場で引き算して、次の位置へ
    }
}

int main()
{
    cin >> N >> K;
    A.resize(N);
    solve(0, K);
}
