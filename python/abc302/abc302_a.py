
A,B = input().split()
A = int(A)
B = int(B)

C = A // B
if A % B == 0:
  print(C)
else:
  print(C + 1)