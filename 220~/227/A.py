n, k, a = map(int, input().split())
ans = None

for i in range(a, a + k):
    if i % n == 0:
        ans = n
    else:
        ans = i % n

print(ans);