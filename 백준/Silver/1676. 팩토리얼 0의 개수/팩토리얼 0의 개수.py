import math
a = int(input())
b = math.factorial(a)
cnt = 0
while(True):
    if(b % 10 == 0):
        cnt += 1
        b //= 10
    else:
        break
print(cnt)