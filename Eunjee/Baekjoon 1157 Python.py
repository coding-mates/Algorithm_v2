"""
1157. 단어 공부
"""
word = input().upper()
cnt = [0]*26
for w in word:
    cnt[ord(w)-65]+= 1
maxx = max(cnt)
if cnt.count(maxx)==1:
    idx = cnt.index(maxx)
    print(chr(idx+65))
else:
    print("?")


"""
words = input().lower()
words_list = list(set(words))
word_count = list()

for i in words_list:
    count = words.count(i)
    word_count.append(count)

if(word_count.count(max(word_count)) >= 2):
    print('?')
else:
    print(words_list[(word_count.index(max(word_count)))].upper())

set을 쓰는 방법도 있슴
"""
