# 정수론 및 조합론 - 최소공배수


def Euclid(a,b):
    if(a%b==0):
        return b
    
    else:
        return Euclid(b,a%b)
        
    
    
    


n=int(input())

for i in range(n):
    x=list(map(int, input().split(' ')))
    x.sort()
    g=Euclid(x[0],x[1])
    print(int(x[0]*x[1]/g))