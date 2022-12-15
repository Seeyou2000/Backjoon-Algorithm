import sys
input = sys.stdin.readline

f = []
n = int(input())
f.append(0)
f.append(1)
if n == 0:
    print(f[0])
if n == 1:
    print(f[1])
if n > 1:
    for i in range(2,n+1):
        f.append(f[i-1] + f[i-2])
    print(f[n])