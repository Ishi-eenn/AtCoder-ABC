h, w = map(int, input().split())
s = [list(input()) for _ in range(h)]

i = 0
while i < h:
    j = 1
    while j < w:
        if s[i][j - 1] == 'T' and s[i][j] == 'T':
            s[i][j - 1] = 'P'
            s[i][j] = 'C'
            j += 2
        
        j += 1
    i += 1

for i in s:
    print(''.join(i))