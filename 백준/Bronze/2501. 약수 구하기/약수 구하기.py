import sys
input = sys.stdin.readline

N,K=map(int,input().split())
arr = [x for x in range(1,N+1) if N%x==0]
if len(arr) < K: print(0)
else: print(arr[K-1])