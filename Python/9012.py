# 스택 - 괄호

class Stack:
    
    def __init__(self):
        self.array=[]
        self.top=-1
        self.ans=True
    
    
    def push(self, x):
        self.array.append(x)
        self.top+=1
        
        
    def pop(self):
        if self.top==-1:
            s.ans=False
        
        else:
            del self.array[self.top]
            self.top-=1

    
    def IsEmpty(self):
        if self.top==-1:
            self.ans=True
        
        else:
            self.ans=False
    

    

n=int(input())

s=Stack()

for i in range(n):
    
    s.array.clear()
    s.top=-1
    s.ans=True
    
    temp=input()
    
    for j in temp:
        if j=='(':
            s.push(1)
        
        else:
            s.pop()
    
    if s.ans==True:
        s.IsEmpty()
        
    if s.ans==True:
        print('YES')
    else:
        print('NO')