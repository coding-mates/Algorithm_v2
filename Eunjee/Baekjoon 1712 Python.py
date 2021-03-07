"""
1712. 손익분기점
"""
a,b,c = map(int, input().split())
answer = -1 if b>=c else a//(c-b)+1
print(answer)