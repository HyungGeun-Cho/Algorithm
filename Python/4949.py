# 스택 - 균형잡힌 세상

class Stack:
    
    def __init__(self):
        self.array=[]
        self.top=-1
        self.ans=True
    
    
    def push(self, x):
        self.array.append(x)
        self.top+=1
        
        
    def pop(self, x):
        
        
        if self.top==-1:
            s.ans=False
        
        else:
            
            if self.array[self.top]!=x:
                s.ans=False
            
            else:
                del self.array[self.top]
                self.top-=1

    
    def IsEmpty(self):
        if self.top==-1:
            self.ans=True
        
        else:
            self.ans=False
    

    

a="start"

s=Stack()

while(len(a)!=1):
    a=input()
    if len(a)==1: break
        
    s.array.clear()
    s.top=-1
    s.ans=True
        
        
        
    for i in range(len(a)):
        

        
        if a[i]=='(':
            s.push(1)
            
        elif a[i]==')':
            s.pop(1)
            
        elif a[i]=='[':
            s.push(2)
        
        elif a[i]==']':
            s.pop(2)
            
    if s.ans==True:
        s.IsEmpty()
        
    if s.ans==True:
        print("yes")
        
    else:
        print("no")



  