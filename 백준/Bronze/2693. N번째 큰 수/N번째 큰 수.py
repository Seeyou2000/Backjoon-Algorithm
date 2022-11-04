import sys
input = sys.stdin.readline

arr = []
for _ in range(int(input())):
    arr = list(map(int,input().split()))
    arr.sort()
    print(arr[-3])