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
index=Stack()

n=int(input())


arr=list(map(int,input().split(" ")))
result=[]
result_index=[]

for i in range(n):
    temp=arr[i]    
    
    
    if s.top!=-1:
        cnt=s.top
        while(cnt!=-1):
            if s.array[cnt]<temp:
                s.pop()
                result.append(temp)
                result_index.append(index.array[index.top])
                index.pop()
            
            else: break
                
            cnt-=1

    
    s.push(temp)
    index.push(i)

while s.IsEmpty()!=True:
    result.append(-1)
    s.pop()
    result_index.append(index.array[index.top])
    index.pop()
    
dictionary = dict(zip(result_index, result)) 
    
for i in range(n):
    print(dictionary[i], end=" ")