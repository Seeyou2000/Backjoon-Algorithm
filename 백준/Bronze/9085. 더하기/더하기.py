import sys
input = sys.stdin.readline

for _ in range(int(input())):
    arr = []
    N = int(input())
    arr = list(map(int,input().split()))
    print(sum(arr))