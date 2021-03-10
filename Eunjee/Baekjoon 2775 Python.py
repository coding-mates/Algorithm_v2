"""
2775. 부녀회장이 될테야
"""
# 재귀
def recursion(f, w):
    if f == 1:
        return w*(w+1)//2
    else:
        summ = 0
        for i in range(1,w+1):
            summ += recursion(f-1, i)
        return summ

# DP
def dp(f,w):
    for i in range(1, w+1):
        memo[0][i-1] = i
    for i in range(1, f+1):
        for j in range(w):
            for k in range(j+1):
                memo[i][j] += memo[i-1][k]
    return memo[f][w-1]

tc = int(input())
for _ in range(tc):
    floor = int(input())
    width = int(input())
    memo = [[0]*width for _ in range(floor+1)]
    # res = recursion(floor, width)
    res = dp(floor,width)
    print(res)