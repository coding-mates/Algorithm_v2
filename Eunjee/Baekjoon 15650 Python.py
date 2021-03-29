"""
15650. N과 M(2)
"""
from itertools import combinations

n, m = map(int, input().split())
comb = list(combinations(range(1,n+1), m))

for i in comb:
    for j in i:
        print(j, end=' ')
    print()