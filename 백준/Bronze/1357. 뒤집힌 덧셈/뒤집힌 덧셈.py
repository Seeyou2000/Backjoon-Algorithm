import sys
input = sys.stdin.readline

x,y=map(str,input().split())
x,y=x[::-1],y[::-1]
ans = int(x)+int(y)
ans = str(ans)
ans = ans[::-1]
print(int(ans))