import sys
input = sys.stdin.readline
arr = []
s = int(input())
for _ in range(9):
    book = int(input())
    arr.append(book)
s -= sum(arr)
print(s)
    