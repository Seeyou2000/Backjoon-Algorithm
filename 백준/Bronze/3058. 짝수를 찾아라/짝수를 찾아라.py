import sys
input = sys.stdin.readline

for _ in range(int(input())):
    arr = list(map(int,input().split()))
    arr = [x for x in arr if x%2==0]
    arr.sort()
    print(sum(arr),arr[0])