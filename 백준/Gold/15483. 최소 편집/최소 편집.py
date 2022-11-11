import sys
input = sys.stdin.readline

S = input()
T = input()
len_S = len(S)
len_T = len(T)

E = [[0] * (len_T + 1) for _ in range(len_S + 1)]

for i in range(len_S + 1):
    E[i][0] = i
for i in range(len_T + 1):
    E[0][i] = i

for i in range(1, len_S + 1):
    for j in range(1, len_T + 1):
        if(S[i-1] == T[j-1]):
            E[i][j] = E[i-1][j-1]
        else:
            E[i][j] = min(E[i-1][j-1],min(E[i-1][j],E[i][j-1]))+1
print(E[len_S][len_T])            