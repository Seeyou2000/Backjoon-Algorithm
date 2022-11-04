import sys
input = sys.stdin.readline

for _ in range(3):
    S = 0
    N = int(input())
    for _ in range(N):
        M = int(input())
        S += M
    if S < 0:
        print('-')
    elif S > 0:
        print('+')
    else:
        print('0')