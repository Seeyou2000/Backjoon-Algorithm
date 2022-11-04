import sys
input = sys.stdin.readline

cnt = 0
arr = input()
for item in arr:
    cnt+=1
    print(item,end='')
    if cnt == 10:
        print()
        cnt = 0