import sys
input = sys.stdin.readline

arr = []
for _ in range(int(input())):
    arr = list(map(int,input().split()))
    arr.sort()
    if arr[3] - arr[1] >= 4:print("KIN")
    else: print(sum(arr[1:4]))