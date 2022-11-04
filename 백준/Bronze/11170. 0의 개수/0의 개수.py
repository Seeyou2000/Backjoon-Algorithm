import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    cnt = 0
    N,M=map(int,input().split())
    for i in range(N,M+1):
        arr = str(i)
        ans = [x for x in arr]
        for item in ans:
            if item == '0':
                cnt+=1
    print(cnt)