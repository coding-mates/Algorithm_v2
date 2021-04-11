"""
9184. 신나는 함수 실행
"""
def w(a,b,c):
    if a<=0 or b<=0 or c<=0:
        return 1
    if a > 20 or b > 20 or c > 20:
        return w(20,20,20)
    if ws[a][b][c]:
        return ws[a][b][c]
    elif a < b < c:
        res = w(a,b,c-1) +w(a, b-1, c-1) - w(a,b-1,c)
        ws[a][b][c] = res
        return res
    else:
        res = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1,b-1,c-1)
        ws[a][b][c] = res
        return res

ws = [[[0]*21 for _ in range(21)] for _ in range(21)]
ans = "w({}, {}, {}) = {}"
while(1):
    a, b, c = map(int, input().split())
    if a == b == c == -1:
        break
    print(ans.format(a,b,c,w(a,b,c)))