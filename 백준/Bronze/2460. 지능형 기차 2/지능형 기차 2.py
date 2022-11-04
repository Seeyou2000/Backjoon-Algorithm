import sys
input = sys.stdin.readline

people = ans = 0
for _ in range(10):
    G_off,G_on=map(int,input().split())
    people += G_on
    people -= G_off
    ans = max(ans,people)
print(ans)
