import sys
input = sys.stdin.readline

arr = []
ans = score = 0
for _ in range(5):
    arr.append(list(map(int,input().split())))
for idx, items in enumerate (arr):
    if sum(items) > score:
        score = sum(items)
        ans = (idx+1,score)
print(' '.join(str(x) for x in ans))