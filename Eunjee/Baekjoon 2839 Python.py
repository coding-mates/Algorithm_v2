"""
2839. 설탕 배달
"""
n = int(input())
minn = n//5+1 if n%5 else n//5
maxx = n//3+1 if n%3 else n//3
res = -1
for i in range(minn, maxx+1):
    for j in range(i+1):
        temp = 3*j + 5*(i-j)
        if temp == n:
            res = i
            break
    if res != -1:
        break
print(res)
