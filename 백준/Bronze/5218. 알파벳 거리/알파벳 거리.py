import sys
input = sys.stdin.readline

for _ in range(int(input())):
    ans = []
    text,d_text=input().split()
    for i in range(len(text)):
        if ord(text[i]) <= ord(d_text[i]):
            ans.append(ord(d_text[i]) - ord(text[i]))
        else:
            ans.append(26 - (ord(text[i]) - ord(d_text[i])))
    print("Distances:", ' '.join(str(x) for x in ans))