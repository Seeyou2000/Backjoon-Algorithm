import sys
input = sys.stdin.readline

ans = []
arr = list(input())
ans = [x for x in arr if 'a' in x or 'e' in x or 'i' in x or 'o' in x or 'u' in x]
print(len(ans))