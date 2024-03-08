#A - First Player
N=int(input())
Names=[]
Ages=[]
for i in range(N):
    a,b=input().split()
    b=int(b)
    Names.append(a)
    Ages.append(b)
c=Ages.index(min(Ages))
#print(c)
for i in range(c-N,c):
  "#print(i)
  print(Names[i])