#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 入出力の高速化
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    if (!(cin >> N >> Q))
        return 0;

    vector<int> A(N, 0);
    set<int> non_zero_indices; // 1以上になっている要素の位置（0-indexed）を保持
    int xor_sum = 0;           // 現在の全体のXOR和

    for (int q = 0; q < Q; q++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;
            x--; // 1-indexed から 0-indexed に変換

            // 変更前の値をXOR和から除外
            xor_sum ^= A[x];

            // 0から1になるときは非ゼロ集合に追加
            if (A[x] == 0)
            {
                non_zero_indices.insert(x);
            }

            A[x]++;

            // 変更後の値をXOR和に反映
            xor_sum ^= A[x];
        }
        else if (type == 2)
        {
            vector<int> to_remove; // 0になった要素を記録する用

            // 1以上の要素のみ処理する
            for (int idx : non_zero_indices)
            {
                // 変更前の値をXOR和から除外
                xor_sum ^= A[idx];

                A[idx]--;

                // 変更後の値をXOR和に反映
                xor_sum ^= A[idx];

                // 0になった要素は後で削除リストへ
                if (A[idx] == 0)
                {
                    to_remove.push_back(idx);
                }
            }

            // 0になった要素を非ゼロ集合から削除
            for (int idx : to_remove)
            {
                non_zero_indices.erase(idx);
            }
        }

        // 各クエリ後のXOR和を出力
        cout << xor_sum << "\n";
    }

    return 0;
}
