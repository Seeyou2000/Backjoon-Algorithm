chang = 100
sang = 100

n=int(input())
for _ in range(n):
    a,b=map(int,input().split())
    if a<b:
        sang -= b
    elif a>b:
        chang -= a
print(str(sang) + "\n" + str(chang))