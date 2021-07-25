# 큐 - 카드2

import sys

class Queue:
    
    
    def __init__(self):
        self.s=0
        self.e=0
        self.array=[]
    
    def push(self,x):
        self.array.append(x)
        self.e+=1
        
        
    def pop(self):
        
        if self.s==self.e:
            return -1
            
        else:
            self.s+=1 #이 부분 수정해야할듯 ㅇㅇ
            return self.array[self.s-1]
            
        
        
    def size(self):
        return self.e-self.s
        

    
n=int(input())
cnt=1

q=Queue()

for i in range(1,n+1):
    q.push(i)
    

while(q.size()>1):
    if cnt%2==0:
        temp=q.pop()
        q.push(temp)
        
    else:
        q.pop()
        
    cnt=cnt+1    
        
print(q.pop())