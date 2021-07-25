# 스택 - 오큰수


class Stack():
    
    def __init__(self):
        self.array=[]
        self.top=-1
        self.ans=True
        self.max=
    
    def push(self,x):
        self.array.append(x)
        self.top+=1

    
    def pop(self):
        if s.top==-1:
            s.ans=False
            
        else:

            del self.array[self.top]
            self.top-=1

        
s=Stack()
index=Stack()

n=int(input())


arr=list(map(int,input().split(" ")))
result=[-1]*n

for i in range(n):
    temp=arr[i]    
    
    
    if s.top!=-1:
        cnt=s.top
        while(cnt!=-1):    
            if s.array[cnt]<temp:
                s.pop()
                result[index.array[index.top]]=temp
                index.pop()
            cnt-=1

    
    s.push(temp)
    index.push(i)


    
    
    
for i in result:
    print(i, end=" ")