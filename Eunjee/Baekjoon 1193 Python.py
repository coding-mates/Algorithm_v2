"""
1193. 분수 찾기
"""
num = int(input())
depth = 1
summ = 0
while num > summ+depth:
    summ += depth
    depth += 1
left = num-summ

child = depth+1 - left if depth%2 else left
parent = depth+1-child
print("{0}/{1}".format(child,parent))