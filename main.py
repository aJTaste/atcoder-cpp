# # すでに配列を作らなくてもappendがある
# # 入力をしながらカウントしても良いという話

# N, L, R = map(int, input().split())
# cnt = 0
# for i in range(N):
#     h, s = input().split()
#     if L <= int(h) <= R and s == "Yes":
#         cnt += 1
# print(cnt)


N, L, R = map(int, input().split())
H = [135]
S = ["Yes"]
counting = 0

for i in range(N):
    h2, s2 = input().split()
    H.append(h2)
    S.append(s2)


for i in range(N):
    if L <= H[i] and H[i] <= R and S[i] == "Yes":
        counting += 1


print(counting)
