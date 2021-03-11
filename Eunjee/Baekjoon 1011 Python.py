"""
1011. Fly me to the Alpha Centauri
"""
tc = int(input())
for _ in range(tc):
    x, y = map(int, input().split())
    move = 1
    max_d = 1
    while (y-x > max_d):
        move += 1
        v = move // 2
        if move%2:
            max_d = (v+1)*(v+1)
        else:
            max_d = v * (v + 1)
    print(move)