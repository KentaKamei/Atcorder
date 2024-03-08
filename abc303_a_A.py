N=int(input())
s=[input()for i in range(2)]
print(s, s[0], s[0][1])
s[0]=s[0].replace("1","l").replace("0","o")
s[1]=s[1].replace("1","l").replace("0","o")
for i in range(N):
    if s[0][i]!=s[1][i]:
        print("No")
        break
print("Yes")