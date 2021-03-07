"""
2292. 벌집
"""
num = int(input())
depth = 1
summ = 1
while num > summ:
    summ += 6*depth
    depth += 1
print(depth)
