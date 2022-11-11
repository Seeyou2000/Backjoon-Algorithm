import sys
input = sys.stdin.readline

name = []
for _ in range(5):
    name.append(input().split())
li = [idx + 1 for idx, item in enumerate(name) if 'FBI' in str(item)]
if li: print(*li)
else: print("HE GOT AWAY!")