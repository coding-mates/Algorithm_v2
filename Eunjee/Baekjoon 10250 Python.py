"""
10250. ACM 호텔
"""
tc = int(input())
for _ in range(tc):
    h, w, n = map(int, input().split())
    width = (n-1)//h +1
    height = (n-1)%h +1
    if width < 10:
        answer = str(height)+'0'+str(width)
    else:
        answer = str(height)+str(width)
    print(answer)