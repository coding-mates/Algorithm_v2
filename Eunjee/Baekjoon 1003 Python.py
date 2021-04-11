"""
1003. 피보나치 함수
"""
tc = int(input())
fibo = [0,1]
for _ in range(tc):
    num = int(input())
    if num == 0:
        print(1, 0)
    elif num == 1:
        print(0, 1)
    elif 1 < num < len(fibo):
        print(fibo[num-1], fibo[num])
    else:
        while num >= len(fibo):
            fibo.append(fibo[-1]+fibo[-2])
        print(fibo[num-1], fibo[num])