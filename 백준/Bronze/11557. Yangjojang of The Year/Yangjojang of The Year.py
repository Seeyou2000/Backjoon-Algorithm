T = int(input())
L_Max = 0
ans = ""
for _ in range(T):
    N = int(input())
    for _ in range(N):
        S,L=input().split()
        L = int(L)
        if L_Max < L:
            L_Max = L
            ans = S
    print(ans)