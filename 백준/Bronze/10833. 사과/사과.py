import sys
input = sys.stdin.readline

spare_apple = []
for _ in range(int(input())):
    student, apple = map(int,input().split())
    spare_apple.append(apple%student)
print(sum(spare_apple))
