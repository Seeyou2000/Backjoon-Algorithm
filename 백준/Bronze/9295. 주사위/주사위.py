import sys
input = sys.stdin.readline

for i in range(int(input())):
    x1,x2=map(int,input().split())
    print("Case %d: %d" % (i+1, x1+x2))