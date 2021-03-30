"""
15652. N과 M(4)
"""
def dfs(d, k):
    global n, m
    if d == m:
        for c in comb:
            print(c, end=" ")
        print()
        return

    for i in range(k, n+1):
        comb.append(i)
        dfs(d+1, i)
        comb.pop()

n, m = map(int,input().split())
comb = []
dfs(0, 1)