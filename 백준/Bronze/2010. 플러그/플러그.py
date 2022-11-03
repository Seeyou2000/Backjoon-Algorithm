import sys
input = sys.stdin.readline

ans = 1
for _ in range(int(input())):
    plug = int(input())
    ans += (plug-1)
print(ans)