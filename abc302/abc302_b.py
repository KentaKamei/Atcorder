H, W = map(int, input().split())
A = [[] for i in range(H)]
for i in range(H):
  A[i].extend(input())
#print(A)
B = list('snuke')
for j in range(H):
  for k in range(W):
    if A[j][k] == "s":
      #print(j, k) 
      if k <= W - 5: 
        for l in range (1, 5):
          #print("右")
          if A[j][k + l] == B[l]:#右
            if l == 4:
              for m in range(5):
                print(str(j + 1) + " " + str(k + m + 1))
          else:
            break
      if k >= 4:
        #print("左")
        for l in range (1, 5):
          if A[j][k - l] == B[l]:#左
            if l == 4:
              for m in range(5):
                print(str(j + 1) + " " + str(k - m + 1))
          else:
            break
      if j >= 4:
        #print("上")
        for l in range (1, 5):
          if A[j - l][k] == B[l]:#上
            if l == 4:
              for m in range(5):
                print(str(j - m + 1) + " " + str(k + 1))
          else:
            break
      if H - j - 1 >= 4:
        #print("下")
        for l in range (1, 5):
          if A[j + l][k] == B[l]:#下
            if l == 4:
              for m in range(5):
                print(str(j + m + 1) + " " + str(k + 1))
          else:
            break
      if j >= 4 and k >= 4:
        #print("左上")
        for l in range (1, 5):
          if A[j - l][k - l] == B[l]:#左上
            if l == 4:
              for m in range(5):
                print(str(j - m + 1) + " " + str(k - m + 1))
          else:
            break
      if j >= 4 and W - k - 1 >= 4:
        #print("右上")
        for l in range (1, 5):
          if A[j - l][k + l] == B[l]:#右上
            if l == 4:
              for m in range(5):
                print(str(j - m + 1) + " " + str(k + m + 1))
          else:
            break
      if k >= 4 and H - j - 1 >= 4:
        #print("左下")
        for l in range (1, 5):
          if A[j + l][k - l] == B[l]:#左下
            if l == 4:
              for m in range(5):
                print(str(j + m + 1) + " " + str(k - m + 1))
          else:
            break
      if W - k - 1 >= 4 and H - j - 1 >= 4:
        #print("右下")
        for l in range (1, 5):
          if A[j + l][k + l] == B[l]:#右下
            if l == 4:
              for m in range(5):
                print(str(j + m + 1) + " " + str(k + m + 1))
          else:
            break
