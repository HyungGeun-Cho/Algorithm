# 정수론 및 조합론 - 최대공약수와 최소공배수

a=list(map(int, input().split(' ')))
a.sort()

ans=0

for i in range(1,a[0]+1):
    if(a[0]%i==0 and a[1]%i==0):
        ans=i
        
        
print(ans)
print(int(a[0]/ans*a[1]))