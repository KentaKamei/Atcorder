S1, S2, S3, S4, S5, S6, S7, S8 = map(int,input().split())
if S1 <= S2 <= S3 <= S4 <= S5 <= S6 <= S7 <= S8 and 100 <= S1 <= 675 and 100 <= S2 <= 675 and 100 <= S3 <= 675 and 100 <= S4 <= 675 and 100 <= S5 <= 675 and 100 <= S6 <= 675 and 100 <= S7 <= 675 and 100 <= S8 <= 675 and S1 % 25 == 0 and S2 % 25 == 0 and S3 % 25 == 0 and S4 % 25 == 0 and S5 % 25 == 0 and S6 % 25 == 0 and S7 % 25== 0 and S8 % 25 == 0:
    print("Yes")
else:
    print("No")