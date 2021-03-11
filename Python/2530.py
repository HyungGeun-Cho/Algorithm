
a, b, c= map(int, input().split())

d=int(input())


d_sec=d%60
d_min=(d//60)%60
d_hour=d//3600




print((a+d_hour+(b+d_min+(c+d_sec)//60)//60)%24, (b+d_min+(c+d_sec)//60)%60, (c+d_sec)%60)

