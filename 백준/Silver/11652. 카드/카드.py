import sys
from collections import Counter
input = sys.stdin.readline

def modefinder(numbers):
    c = Counter(numbers)
    order = c.most_common()
    maximun = order[0][1]
    
    modes = []
    for num in order:
        if num[1] == maximun:
            modes.append(num[0])
    return modes

cards, ans = [], []
for _ in range(int(input())):
    cards.append(int(input()))
ans = modefinder(cards)
print(min(ans))