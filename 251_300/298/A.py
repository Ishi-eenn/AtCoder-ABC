n = int(input())
s = input()

judge = 0
for i in range(n):
    if(s[i] == 'x'):
        print("No")
        exit()
    if(s[i] == 'o'):
        judge = 1

if(judge == 1):
    print("Yes")
else:
    print("No")
