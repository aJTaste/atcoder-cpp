# 何よりも最初に範囲ベースのforをやりたい（大河塾メモ）

# 数学みたいな範囲指定もできる（cppではできないけど）
# counting+=1の書き方
# ２つ目のforで範囲ベースできるからそれも
# すでに配列を作らなくてもappendがある
# 入力をしながらカウントしても良いという話

N, L, R = map(int, input().split())
cnt = 0
for i in range(N):
    h, s = input().split()
    if L <= int(h) <= R and s == "Yes":
        cnt += 1
print(cnt)
