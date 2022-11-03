import sys
input = sys.stdin.readline

for _ in range(int(input())):
    c,v=map(int,input().split())
    you_piece = c // v
    dad_piece = c % v
    print(f"You get {you_piece} piece(s) and your dad gets {dad_piece} piece(s).")