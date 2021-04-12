"""
1904. 01타일
"""
# 점화식 피보나치와 동일
n = int(input())
ans = [0,1,2]
while n >= len(ans):
    ans.append((ans[-1]+ans[-2])%15746)
print(ans[n])