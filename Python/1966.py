# 큐 - 프린터 큐

class Queue:
    
    def __init__(self):
        self.array=[]
        self.s=0
        self.e=0

    
    def push(self,x):
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
    
    
t=int(input())
answer=[]

for i in range(t):
    

    
    q=Queue()
    r=Queue()
    cnt=-1
    n, m=map(int, input().split(" "))
    a=list(map(int, input().split(" ")))
    
    for i in range(n):
        q.push(i+1)
        r.push(a[i])

        
    while(cnt!=m):

        temp_rank=r.pop()
        l=list(reversed(r.array))
        
        if temp_rank>=l[0]:
            temp_ans=q.pop()
            cnt+=1
            
            if cnt==m:
                answer.append(temp_ans)
                
        else:
            r.push(temp_rank)
            temp_ans=q.pop()
            q.push(temp_ans)
            
            
for i in answer:
    print(i)
        
    