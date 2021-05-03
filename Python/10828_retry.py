# STACK - Python
import sys


class Stack:
    
    def __init__(self):
        self.array=[]
        self.top=-1
        
        
    def IsEmpty(self):
        if(self.top<0):
            print(1)
        else:
            print(0)
        
    # def IsFull(self):
    #     if(self.top>=self.max-1):
    #         return True
    #     else:
    #         return False

    def push(self, item):
        self.array.append(item)
        self.top+=1
        
        
    
    def pop(self):
        if self.top!=-1:
            print(self.array[self.top])
            del self.array[self.top]
            self.top=self.top-1
        
        else:
            print(-1)
    
    def size(self):
        print(self.top+1)
        
    def printtop(self):
        if(self.top==-1):
            print(-1)
        
        else:
            print(self.array[self.top])

        
s=Stack()
n=int(input())

for i in range(n):
    temp=sys.stdin.readline().strip().split(' ')
    
    if temp[0]=='push':
        s.push(int(temp[1]))
        
    elif temp[0]=='pop':
        s.pop()
    
    elif temp[0]=='size':
        s.size()
        
    elif temp[0]=='empty':
        s.IsEmpty()
    
    elif temp[0]=='top':
        s.printtop()
        
        
    