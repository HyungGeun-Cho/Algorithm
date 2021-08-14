# 큐 - 요세푸스 문제 0

class Queue:
    
    def __init__(self):
        self.array=[]
        self.s=0
        self.e=0
        
        
    def push(self, x):
        self.array.append(x)
        self.e+=1
    
    
    def pop(self):
        if self.s==self.e:
            return -1
        
        else:
            self.s+=1
            return self.array[self.s-1]
        
    
    def size(self):
        return self.e-self.s
    

    
n, k=map(int,input().split(" "))    
q=Queue()
result=[]

for i in range(1,n+1):
    q.push(i)

while(q.size()>0):
    for i in range(k-1):
        temp=q.pop()
        q.push(temp)
    result.append(q.pop())    
    
    
print("<", end="")
for i in range(n-1):
    print(result[i],end=", ")
    
print(result[n-1],end=">")