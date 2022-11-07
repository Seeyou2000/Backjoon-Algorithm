import sys
input = sys.stdin.readline

cnt = 0
N = int(input())
M = int(input())
matarial = list(map(int,input().split()))
matarial.sort()
p = 0
q = len(matarial) - 1
while p < q:
    if matarial[p] + matarial[q] < M:
        p+=1
    elif matarial[p] + matarial[q] > M:
        q-=1
    else:
         cnt+=1
         p+=1
         q-=1
print(cnt)