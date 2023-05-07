s = input()
b = []
r = []

for i in range(0, 8):
    if s[i] == 'B':
        b.append(i)
    if s[i] == 'R':
        r.append(i)
    if s[i] == 'K':
        k = i

if (b[0] % 2) == (b[1] % 2):
    print("No")
    exit()

if (r[0] < k) and (k < r[1]):
    print("Yes")
    exit()

print("No")