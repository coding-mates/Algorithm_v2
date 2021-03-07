"""
1316. 그룹 단어 체커
다시 푼 코드가 더 구린 케이스..
"""
# 새로 푼 코드
num = int(input())
words = []
for _ in range(num):
    words.append(input())
count = 0
for word in words:
    stack = []
    flag = True
    for w in word:
        if w in stack:
            if stack[-1] != w:
                flag = False
                break
        else:
            stack.append(w)
    if flag:
        count += 1
print(count)
    
# 예전에 풀었던 코드
tc_num = int(input())
count = 0
for _ in range(tc_num):
    flag = True
    word = input()
    group_list = []
    for w in word:
        if len(group_list) and w in group_list:
            if group_list[-1] != w:
                flag = False
                break
        else:
            group_list.append(w)
    if flag:
        count += 1
print(count)
