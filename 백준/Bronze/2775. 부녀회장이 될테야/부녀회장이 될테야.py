import sys
input = sys.stdin.readline

apart = [[0 for j in range(15)] for i in range(15)]
apart[0] = [i for i in range(0,15)]

for i in range(1,15):
    for j in range(1,15):
        apart[i][j] = apart[i-1][j] + apart[i][j-1]

T = int(input())

for _ in range(T):
    a = int(input())
    b = int(input())
    print(apart[a][b])