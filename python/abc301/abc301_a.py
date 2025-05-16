N = int(input())
S = list(input())
j,k = 0, 0

for i in range(N - 1):
  if S[i] == "T":
    j += 1
  else:
    k += 1
if abs(j - k) >= 2:
  print("T" if max(j, k) == j else "A")
elif k == j:
  print(S[N -1])
elif j - k == 1:
  print("T")
elif k - j == 1:
  print("A")

