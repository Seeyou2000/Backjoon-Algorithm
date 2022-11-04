import sys
import statistics
input = sys.stdin.readline

arr = []
for _ in range(10):
    N=int(input())
    arr.append(N)
arr.sort()
print(sum(arr)//len(arr))
print(statistics.mode(arr))