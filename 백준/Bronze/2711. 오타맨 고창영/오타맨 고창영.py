import sys
input = sys.stdin.readline

for _ in range(int(input())):
    idx,text=input().split()
    text = list(text)
    del text[int(idx)-1]
    ans = ''.join(x for x in text)
    print(ans)