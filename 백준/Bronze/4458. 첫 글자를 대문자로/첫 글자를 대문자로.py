import sys
input = sys.stdin.readline

for _ in range(int(input())):
    arr = input()
    print(arr[0].upper() + arr[1:], end='')