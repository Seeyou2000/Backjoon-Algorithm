import sys
input = sys.stdin.readline

arr = input()
lis = list(arr[:len(arr)-1])
lis.sort(reverse=True)
result = ''.join(x for x in lis)
if int(result) % 30:
    print(-1)
else:
    print(result)