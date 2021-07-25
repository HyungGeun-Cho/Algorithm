# 이분탐색 - 숫자카드2
import sys
n=int(input())

a=list(map(int,sys.stdin.readline().split(" ")))
a.sort()



m=int(input())

b=list(map(int,sys.stdin.readline().split(" ")))


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
        

        
def right_position(num,l,s,e):
    
    if s>e:
        return -1
    
    mid=(s+e)//2
    
    if l[mid]==num:
        if mid==n-1:
            return mid
        else:
            if l[mid+1]!=num:
                return mid
            
            else:
                return right_position(num,l,mid+1,e)
            
    elif l[mid]>num:
        return right_position(num,l,s,mid-1)
    else:
        return right_position(num,l,mid+1,e)
        
    

ans=[]

for i in range(m):
    r=right_position(b[i],a,0,n-1)
    l=left_position(b[i],a,0,n-1)
    
    #print(b[i],r,l)
    
    if r==-1 or l==-1:
        ans.append(0)
    else:
        ans.append(r-l+1)
    
for i in range(m):
    print(ans[i],end=" ")