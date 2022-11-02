T=int(input())
for _ in range(T):
    c_max = 0
    max_name = ""
    P=int(input())
    for _ in range(P):
        c,name=input().split()
        c = int(c)
        if c_max < c:
            c_max = c
            max_name = name
    print(max_name)