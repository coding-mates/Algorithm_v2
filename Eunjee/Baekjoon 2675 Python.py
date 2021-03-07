"""
2675. 문자열 반복
"""
tc = int(input())
for _ in range(tc):
    data = input().split()
    r = int(data[0])
    new_str = ""
    for s in data[1]:
        new_str += s*r
    print(new_str)