s = [list(input()) for _ in range(8)]
a = "abcdefgh"
d = "12345678"

for i in range(8):
  for j in range(8):
    if (s[i][j] == "*"):
      print(a[j] + d[7 - i])
      exit()