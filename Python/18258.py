# 큐 - 큐2

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
        
        
    def empty(self):
        if self.s==self.e:
            return 1
        
        else:
            return 0
        
        
    def front(self):
        if self.s==self.e:
            return -1
        else:
            return self.array[self.s]
        
        
    def back(self):
        if self.s==self.e:
            return -1
        else:
           return self.array[self.e-1]
        
        
    
n=int(sys.stdin.readline().strip())

a=[]
q=Queue()
temp=0


for i in range(n):
    a=sys.stdin.readline().strip().split(" ")
    
    
    if a[0]=='push':
        q.push(int(a[1]))
        
    elif a[0]=='pop':
        temp=q.pop()
        if temp!=None:
            print(temp)
        
    elif a[0]=='size':
        print(q.size())
        
    elif a[0]=='empty':
        print(q.empty())
        
    elif a[0]=='front':
        print(q.front())
        
    elif a[0]=='back':
        print(q.back())
        
