A, B = map(int,input().split())
if B - A == 1 and (A % 3 == 1 or A % 3 == 2):
  print("Yes")
else:
  print("No")