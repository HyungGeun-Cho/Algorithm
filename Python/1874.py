
class Stack:
    
    def __init__(self):
        self.array=[]
        self.top=-1
        self.ans=True
        
        
    def push(self,x):
        self.array.append(x)
        self.top+=1
        
    def pop(self):    
        if(self.top==-1):
            self.ans=False
        
        else:
            del self.array[self.top]
            self.top-=1
        
    def IsEmpty(self):
        if self.top!=-1:
            return False
        else:
            return True
        
    def Show(self):
        for i in self.array:
            print(i,end=" ")
        print("")
        
        

n=int(input())
    
    
s=Stack()
arr=[]
result=[]


for i in range(n):
    temp=int(input())
    arr.append(temp)
    
cnt=0

for i in range(1,n+1):
    s.push(i)
    #print("push", i)
    #s.Show()
    result.append("+")
    
    
    while(s.array[s.top]==arr[cnt]):
        s.pop()
        #print("pop", i)
        #s.Show()
        result.append("-")
        cnt+=1
        if cnt>(n-1): break
        if s.top==-1: break
        
if s.IsEmpty()==True:
    if s.ans==True:
        for i in result:
            print(i)
            
    else:
        #print("Wrong during")
        print("NO")
        
else:
    #print("Not Empty")
    print("NO")
        
            
    
    
    
    
    
    
    
    