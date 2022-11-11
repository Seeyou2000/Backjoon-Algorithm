import sys
input = sys.stdin.readline

ans = 0
number = []
expression = list(input().split('-'))
for i in expression:
    x = 0
    li = i.split('+')
    for j in li:
        x += int(j)
    number.append(x)
ans = number[0]

for i in range(1, len(number)):
    ans -= number[i]
print(ans)