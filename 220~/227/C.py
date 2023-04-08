n = int(input())

c = 0
for a in range(1, int(n ** (1 / 3)) + 10):
  for b in range(a, int((n / a) ** (1 / 2)) + 10):
    c += max(0, int(n // (a * b)) - b + 1)

print(c)