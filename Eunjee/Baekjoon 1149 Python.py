"""
1149. RGB 거리
"""
num = int(input())
money = []
dp = [[] for _ in range(num+1)]
dp[0] =[0,0,0]

for _ in range(num):
    r,g,b = map(int, input().split())
    money.append((r,g,b))

for i in range(1,num+1):
    for j in range(3):
        idx1 = (j+1)%3
        idx2 = (j+2)%3
        dp[i].append(min(dp[i-1][idx1]+money[i-1][j], dp[i-1][idx2]+money[i-1][j]))
print(min(dp[-1]))