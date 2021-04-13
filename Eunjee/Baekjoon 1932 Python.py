"""
1932. 정수 삼각형
"""
size = int(input())
triangle = []
for _ in range(size):
    triangle.append(list(map(int, input().split())))

for i in range(1, size):
    for j in range(i+1):
        if j == 0:
            triangle[i][j] += triangle[i - 1][0]
        elif j == i:
            triangle[i][j] += triangle[i - 1][-1]
        else:
            triangle[i][j] += max(triangle[i-1][j-1], triangle[i-1][j])

print(max(triangle[size-1]))