M=int(input())
N=int(input())
a = 1
b = 0
min = 0
arr = []
isGet = False
isMinGet = True
while M > b:
    b = a*a
    a+=1
a-=1
for i in range (M, N + 1):
    if i == b:
        if isMinGet:
            min = b
            isMinGet = False
        arr.append(b)
        a+=1
        b=a*a
        isGet = True
if(isGet):
    print(sum(arr))
    print(min)
else:
    print("-1")
    
