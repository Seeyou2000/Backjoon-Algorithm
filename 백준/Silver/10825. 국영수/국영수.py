import sys
input = sys.stdin.readline

lst,ans = [],[]
for _ in range(int(input())):
    input_data = input().split()
    lst.append([input_data[0], int(input_data[1]), int(input_data[2]), int(input_data[3])])
ans = sorted(lst, key=lambda x : (-x[1],x[2],-x[3],x[0]))
for item in ans:
    print(item[0])