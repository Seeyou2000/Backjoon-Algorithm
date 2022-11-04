arr,hap,idx = [],[],[]
for i in range(1,9):
    people = int(input())
    arr.append([people,i])
arr.sort()
for i in range(5):
    hap.append(arr[i+3][0])
    idx.append(arr[i+3][1])
idx.sort()
print(sum(hap))
for i in idx:
    print(i,end=' ')
