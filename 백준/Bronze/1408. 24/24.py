import sys
input = sys.stdin.readline

p_hour,p_min,p_second = map(int,input().split(":"))
s_hour,s_min,s_second = map(int,input().split(":"))

total = (s_hour*3600 + s_min*60 + s_second) - (p_hour*3600 + p_min*60 + p_second)

if total < 0:
    total += 3600*24

ans_hour = total // 3600
ans_min = (total%3600) // 60
ans_second = total%60

print("%02d:%02d:%02d" % (ans_hour,ans_min,ans_second))