"""
2908. 상수
"""
nums = input().split()
new_num = []
for num in nums:
    new_num.append(num[::-1])
print(max(new_num))