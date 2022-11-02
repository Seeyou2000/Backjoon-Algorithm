import sys
input = sys.stdin.readline

arr = []
n = int(input())
for _ in range(n):
    name,day,month,year = input().split()
    day,month,year = map(int,(day,month,year))
    arr.append((year,month,day,name))
arr.sort()
print(arr[-1][3] + "\n" + arr[0][3])