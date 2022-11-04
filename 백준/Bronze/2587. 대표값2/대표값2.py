import sys
import statistics
input = sys.stdin.readline

arr = []
for _ in range(5):
    N = int(input())
    arr.append(N)
print(int(statistics.mean(arr)))
print(int(statistics.median(arr)))
    