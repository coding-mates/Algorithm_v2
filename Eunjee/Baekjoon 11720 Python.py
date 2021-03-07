"""
11720. 숫자의 합
"""
num = int(input())
number = list(map(int,list(input())))
sum = 0
for i in range(num):
    sum += number[i]
print(sum)