"""
1152. 단어의 개수
"""
sentence = input().strip(' ')
list_s = sentence.split()
if len(list_s) == 1 and list_s[0]=='':
    print(0)
else:
    print(len(list_s))