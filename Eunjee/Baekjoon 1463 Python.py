"""
1463. 1로 만들기
"""
def calc(i):
    poss = []
    poss.append(min(dp[i - 1], dp[i - 2] + 1) + 1)
    if i % 6 == 0:
        poss.append(min(dp[i//2], dp[i//3])+1)
    if i % 2 == 0:
        poss.append(dp[i//2]+1)
    if i % 3 == 0:
        poss.append(dp[i//3]+1)
    return min(poss)

n = int(input())
dp = [0,0]

for i in range(2,n+1):
    dp.append(calc(i))

print(dp[n])

"""
모든 possible한 케이스를 다 돌아서 느림. 최적화 필요
"""