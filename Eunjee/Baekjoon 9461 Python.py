"""
9461. 파도반 수열
"""
p = [0,1,1,1,2,2]
tc = int(input())
for _ in range(tc):
    n = int(input())
    while(n >= len(p)):
        p.append(p[-1]+p[-5])
    print(p[n])