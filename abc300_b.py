H, W = map(int, input().split())
A = [[] for i in range(H)]
B = [[] for i in range(H)]
found = False
for i in range(H):
  A[i].extend(input())
for i in range(H):
  B[i].extend(input())
for s in range(H):
        for t in range(W):
            if all(A[(i + s) % H][(j + t) % W] == B[i][j] for i in range(H) for j in range(W)):
                print("Yes")
                found = True
                break  # 一致が見つかったのでループを抜ける
        if found:    
            break            
if not found:  # 一致する組み合わせが見つからなかった場合
    print("No")
