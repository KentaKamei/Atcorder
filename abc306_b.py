A = list(map(int,input().split()))
#print(A)
M = 0
N = len(A)
for i in range(N):
  M += A[i] * pow(2,i)
print(M)