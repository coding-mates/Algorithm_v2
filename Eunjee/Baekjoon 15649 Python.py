"""
15649. N과 M (1)
"""
from itertools import permutations

n, m = map(int,input().split())
comb = list(permutations(range(1,n+1), m))
for i in comb:
    for j in i:
        print(j, end=' ')
    print()