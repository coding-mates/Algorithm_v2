"""
15651. N과 M(3)
"""
def dfs(d):
    global n,m
    if d == m:
        for c in comb:
            print(c, end=" ")
        print()
        return
    for i in range(1,n+1):
        comb.append(i)
        dfs(d+1)
        comb.pop()


n, m = map(int, input().split())
comb = []
dfs(0)