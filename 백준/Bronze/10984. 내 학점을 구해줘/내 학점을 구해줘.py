import sys
input = sys.stdin.readline

arr=[]
T = int(input())
for _ in range(T):
    N = int(input())
    for _ in range(N):
        s,v=input().split()
        arr.append([int(s),float(v)])
    grade = [arr[i][0] for i in range(N)]
    rating = [arr[i][1] * arr[i][0] for i in range(N)]
    print(sum(grade), "%.1f" % (sum(rating)/sum(grade)))
    arr = grade = rating = []
