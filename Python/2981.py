# 정수론 및 조합론 - 검문

import sys

input = sys.stdin.readline

def Euclid(a,b):
    if(a%b==0):
        return b
    
    else:
        return Euclid(b,a%b)

def find(x):
    gcd=x[0]
    for i in range(len(x)):
        if gcd==1:
            break
            
        gcd=Euclid(x[i], gcd)
 
    return gcd

n=int(input())

a=[]
ans=[]

for i in range(n):
    temp=int(input())
    a.append(temp)
    
a.sort()

for i in range(a[0]):
    a_temp=a.copy()

    for j in range(n):
        a_temp[j]-=i

    
    if(find(a_temp)==1):
        continue
    else:
        ans.append(find(a_temp))
    
    
ans=list(sorted(set(ans)))

for i in range(len(ans)):
    print(ans[i], end=" ")