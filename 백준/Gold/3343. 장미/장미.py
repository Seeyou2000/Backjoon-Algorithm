import math
import sys
input=sys.stdin.readline

N,A_rose_num,A_rose_pay,B_rose_num,B_rose_pay = map(int,input().split())

if(A_rose_pay * B_rose_num < B_rose_pay * A_rose_num):
    A_rose_num,A_rose_pay,B_rose_num,B_rose_pay = B_rose_num,B_rose_pay,A_rose_num,A_rose_pay

answer = float('inf')

for Acnt in range(B_rose_num):
    Bcnt = math.ceil((N-Acnt*A_rose_num)/B_rose_num)
    isbool = False
    if(Bcnt < 0):
        Bcnt = 0
        isbool = True
    answer = min(answer,Acnt*A_rose_pay + Bcnt*B_rose_pay)
    if isbool:
        break

print(answer)