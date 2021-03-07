"""
5622. 다이얼
"""
word = input()
alph = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS','TUV','WXYZ']
time = 0
for w in word:
    for i,j in enumerate(alph):
        if w in j:
            time += (i+3)
print(time)
