import sys
input = sys.stdin.readline

while True:
    text = input()
    text = text[:-1]
    if text == "END": break
    text = text[::-1]
    print(text)