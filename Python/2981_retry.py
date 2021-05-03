# 정수론 및 조합론 - 검문

import sys

input = sys.stdin.readline


def factor(num):
    factor_list=[]    
    for i in range(1,num):
        if i*i>num:
            break
        
        elif i*i==num:
            factor_list.append(i)
            
        elif num%i==0:
                factor_list.append(i)
                factor_list.append(int(num/i))
                
    return sorted(factor_list)


n=int(input())

a=[]
ans=[]

for i in range(n):
    temp=int(input())
    a.append(temp)
    
a.sort()

z=a[len(a)-1]-a[0]
f=factor(z)
f.remove(1)


for i in f:
    for j in range(n-1):
        factor=1
        if(a[j]%i!=a[j+1]%i):
            factor=0
            break
        
    if factor==1:
        ans.append(i)
            
 
for i in range(len(ans)):
    print(ans[i], end=" ")