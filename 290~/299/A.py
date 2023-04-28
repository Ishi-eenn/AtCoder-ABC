n = int(input())
s = input()

judge = 1
for i in range(n):
    if(s[i] == '|'):
        judge *= -1
    if(judge == -1 and s[i] == '*'):
        print("in")
        exit()

print("out")
