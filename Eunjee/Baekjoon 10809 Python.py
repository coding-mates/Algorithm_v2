"""
10809. 알파벳 찾기
"""
# 아스키 코드 a 97
word = input()
alphabet = [-1]*26
for i, w in enumerate(word):
    idx = ord(w)-97
    if alphabet[idx] == -1:
        alphabet[idx] = i
for i in alphabet:
    print(i, end=' ')

