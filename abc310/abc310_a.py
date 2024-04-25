n = list(map(int, input().split()))
m = list(map(int, input().split()))
x = list(map(lambda a: a + n[2], m))

if n[1] <= min(x):
  print(n[1])
else:
  print(min(x))