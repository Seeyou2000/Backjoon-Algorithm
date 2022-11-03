import sys
input = sys.stdin.readline

e = []

isFlag = True
N = int(input())
S = [[0 for j in range(N+1)] for i in range(N+1)]
for _ in range(N):
    r,c=map(int,input().split())
    if isFlag:
        e.append(r)
        e.append(c)
        isFlag = False
    else:
        e.append(c)
for d in range(1,N):
    for i in range(1,N-d+1):
        j = i + d
        S[i][j] = sys.maxsize
        for k in range(i,j):
            if S[i][k] + S[k+1][j] + e[i-1] * e[k] * e[j] < S[i][j]:
                S[i][j] = S[i][k] + S[k+1][j] + e[i-1] * e[k] * e[j]
print(S[1][N])