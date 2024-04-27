N, D = map(int, input().split())
S = [input() for _ in range(N)]

max_free_days = 0
current_free_days = 0

# 全ての日についてチェック
for j in range(D):
    # その日に全員が暇かどうかをチェック
    all_free = True
    for i in range(N):
        if S[i][j] != 'o':
            all_free = False
            break
    
    # 全員が暇ならカウントを増やし、そうでなければカウントをリセット
    if all_free:
        current_free_days += 1
        max_free_days = max(max_free_days, current_free_days)
    else:
        current_free_days = 0

# 最大連続暇な日数を出力
print(max_free_days)
