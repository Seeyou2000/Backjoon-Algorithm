import sys
input = sys.stdin.readline

for _ in range(int(input())):
    P,M=map(int,input().split())
    data = [0]*(M+1)
    cnt = 0
    for _ in range(P):
        N = int(input())
        if data[N] == 0: data[N] = 1
        else: cnt+=1
    print(cnt)