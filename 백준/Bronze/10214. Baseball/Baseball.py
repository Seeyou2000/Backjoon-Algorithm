T = int(input())
Y = K = 0
for _ in range(T):
    for _ in range(1,10):
        a,b=map(int,input().split())
        Y+=a
        K+=b
    if Y < K:
        print("Korea")
    elif Y > K:
        print("Yonsei")
    else:
        print("Draw")