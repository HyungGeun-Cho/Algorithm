# STACK - C


class Stack:
    
    def __init__(self):
        self.array=[]
        self.top=-1
        self.max=10000
        
        
    def IsEmpty(self):
        if(self.top<0):
            return True
        else:
            return False
        
    # def IsFull(self):
    #     if(self.top>=self.max-1):
    #         return True
    #     else:
    #         return False

    def push(self, item):
        print(self.top)
        self.top=self.top+1
        print(self.top)
        self.array[self.top]=item
        
        
    
    def pop(self):
        if not self.IsEmpty():
            print(self.array[self.top])
            self.top=self.top-1
    
    def size(self):
        print(self.top+1)
        
    def printtop(self):
        if(self.top==-1):
            print("-1")
        
        else:
            print(self.array[self.top])

        
s=Stack()
n=int(input())

for i in range(n):
    temp=input().split(' ')
    
    print(temp)
    
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
        
        
    