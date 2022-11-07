import sys
input = sys.stdin.readline

arr = []
arr_sum = cnt = 0
N,K=map(int,input().split())
temperature = list(map(int,input().split()))
for i in range(N):
    arr_sum += temperature[i]
    arr.append(arr_sum)
cnt = arr[K-1]
for i in range(0 ,N-K):
    comp = arr[i+K] - arr[i]
    cnt = max(cnt, comp)
print(cnt)