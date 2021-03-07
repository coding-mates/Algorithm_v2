"""
2941. 크로아티아 알파벳
"""
croa = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
word = input()
count = 0
add_i = 0
for i,w in enumerate(word):
    if add_i != 0:
        add_i -= 1 
        continue
    part = ""
    new_i = 0
    while new_i < 3 and i+new_i < len(word):
        part += word[i+new_i]
        if part in croa:
            count += 1
            add_i = new_i
        new_i += 1
    if not add_i:
        count += 1

print(count)