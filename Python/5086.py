# 정수론 및 조합론 - 배수와 약수

a=1
b=1

while(a!=0 and b!=0):
    a,b= map(int, input().split(' '))
    
    if(a==0 and b==0):
        break
        
    if(a%b==0):
        print("multiple")
    
    elif(b%a==0):
        print("factor")
        
    else:
        print("neither")


