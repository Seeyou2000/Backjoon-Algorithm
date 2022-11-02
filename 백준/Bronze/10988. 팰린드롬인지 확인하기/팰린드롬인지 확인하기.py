string = input()
palinstring = reversed(string)
palinstring = ''.join(palinstring)
if string == palinstring:
    print("1")
else:
    print("0")