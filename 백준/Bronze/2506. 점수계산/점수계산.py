import sys
input = sys.stdin.readline

score = 0
cnt = 1
N=int(input())
lis = list(map(int,input().split()))
for li in lis:
    if li:
        score += cnt
        cnt+=1
    else:
        cnt = 1
print(score)