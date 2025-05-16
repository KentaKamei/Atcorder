n=int(input())
a=input()
if a.count('A')<a.count('T'):
    print('T')
elif a.count('A')>a.count('T'):
    print('A')
else:
    if a[n-1]=='A':
        print('T')
    else:
        print('A')