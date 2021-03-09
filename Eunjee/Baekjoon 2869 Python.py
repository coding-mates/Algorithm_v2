"""
2869. 달팽이는 올라가고 싶다
"""
a, b, v = map(int, input().split())
if v==a:
    day = 1
else:
    day = (v-a)//(a-b)+1 if not (v-a)%(a-b) else (v-a)//(a-b)+2
print(day)