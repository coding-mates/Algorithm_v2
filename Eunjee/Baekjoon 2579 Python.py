"""
2579. 계단 오르기
"""
n = int(input())
stairs = []
dp = []
for _ in range(n):
    stairs.append(int(input()))

for i in range(n):
    if i==0:
        dp.append(stairs[0])
    elif i==1:
        dp.append(stairs[0]+stairs[1])
    elif i==2:
        dp.append(max(stairs[0], stairs[1])+stairs[2])
    else:
        dp.append(max(dp[i-2], dp[i-3]+stairs[i-1])+stairs[i])
print(dp[n-1])