N, D = map(int,input().split())
#print(N, D)
S = []
for i in range(N):
    s = input()
    s2 = list(s)
    S.append(s2)
    #print(S)
c = 0
t = 0
u = 0
for j in range(D):
    for k in range(N - 1):
        if S[k][j] != S[k + 1][j]:
            break
        else:
            if k == N - 1 and c == 0:
                c += 1
                t = j
            elif k == N - 1 and c != 0 and j - t == 1:
                c += 1
            elif k == N - 1 and c != 0 and j - t != 1 and u == 0:
                u = c
                c = 0
            elif k == N - 1 and c != 0 and j - t != 1 and u != 0:
                if u >= c:
                    c = 0
                else:
                    u = c
                    c = 0
if u >= c:
    print(u)
else:
    print(c)
