# 제로

n=int(input())

a=[]

for i in range(n):
    temp=int(input())
    if(temp!=0):
        a.append(temp)
        
    else:
        a.pop()
        
        
if(len(a)==0):
    print(0)
else:
    print(sum(a))

