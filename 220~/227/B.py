n = int(input())
s = list(map(int, input().split()))

judge = None
ans = 0
for i in s:
  judge = 0
  for j in range(1, 1000):
    for k in range(1, 1000):
      if int(4 * j * k + 3 * j + 3 * k) == i:
        judge = 1

  if judge == 1:
    ans += 1

print(n - ans)