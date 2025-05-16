N = int(input())
A = list(map(int, input().split()))

i = 0
while i < len(A) - 1:
    if abs(A[i] - A[i + 1]) != 1:
        if A[i] > A[i + 1]:
            for j in range(A[i] - A[i + 1] - 1):
                A.insert(i + 1 + j, A[i] - j - 1)
            i += abs(A[i] - A[i + 1])  # 新しい要素を挿入した分だけインデックスを進める
        else:
            for k in range(A[i + 1] - A[i] - 1):
                A.insert(i + 1 + k, A[i] + k + 1)
            i += abs(A[i] - A[i + 1])  # 新しい要素を挿入した分だけインデックスを進める
    else:
        i += 1  # 通常の場合はインデックスを1つ進める

for l in range(len(A)):
  print(A[l],end=" ")
