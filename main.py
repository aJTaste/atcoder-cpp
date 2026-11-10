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




N, L, R = map(int, input().split())
H = [0] * N
S = ["null"] * N
counting = 0

for i in range(N):
    h, s = input().split()
    H[i] = int(h)
    S[i] = s


for i in range(N):
    if L <= H[i] and H[i] <= R and S[i] == "Yes":
        counting = counting + 1


print(counting)
