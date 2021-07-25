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


def left_position(num,l,s,e):
    
    if s>e:
        return 0
    
    mid=(s+e)//2
    
    if l[mid]==num:
        if mid==0:
            return mid
        else:
            if l[mid-1]!=num:
                return mid
            
            else:
                return left_position(num,l,s,mid-1)
            
    elif l[mid]>num:
        return left_position(num,l,s,mid-1)
    else:
        return left_position(num,l,mid+1,e)
            
            
s=Stack()
index=Stack()

n=int(input())


arr=list(map(int,input().split(" ")))
result=[]
result_index=[]

for i in range(n):
    temp=arr[i]    
    
    
    if s.top!=-1:
        start=left_position(temp,s.array,0,s.top)-1
        
        for i in range()
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


    
    
    
for i in result:
    print(i, end=" ")