
a, b = map(int, input().split())

c=int(input())

c_hour=c//60
c_min=c%60

print((a+c_hour+(b+c_min)//60)%24, (b+c_min)%60)

