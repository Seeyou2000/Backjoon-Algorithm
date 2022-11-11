import sys
input = sys.stdin.readline

N,M=map(int,input().split())
li = list(str(N)*N)
for idx, item in enumerate(li):
    if M == idx: break
    print(item,end='')
