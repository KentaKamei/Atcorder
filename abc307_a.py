N = map(int,input())
A = list(map(int,input().split()))
k = 0
j = 0
for i in A:
    j += i
    k += 1
    if k == 7:
        print(j,end=" ")
        k = 0
        j = 0
if k != 0:
    print(j,end="\n")      



