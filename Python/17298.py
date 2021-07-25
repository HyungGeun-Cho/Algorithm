# 스택 - 오큰수


class Stack():
    
    def __init__(self):
        self.array=[]
        self.top=-1
        self.ans=True
    
    def push(self,x):
        self.array.append(x)
        self.top+=1

    
    def pop(self):
        if s.top==-1:
            s.ans=False
            
        else:
            del self.array[self.top]
            self.top-=1
    
    def IsEmpty(self):
        if self.top!=-1:
            return False
        else:
            return True

        
s=Stack()

n=int(input())


arr=list(map(int,input().split(" ")))
result=[]

for i in range(n):
    temp=arr[i]    
    
    factor=True
    

    
    if s.top!=-1:
        
        if s.array[0]<temp:
            while s.IsEmpty()!=True:
                s.pop()
                result.append(temp)
            

    
    if temp==max(arr[i:]):
        result.append(-1)
        continue
    
     
    s.push(temp)

while s.IsEmpty()!=True:
    s.pop()
    result.append(-1)
    
    
for i in result:
    print(i, end=" ")