# 이분탐색 - 숫자카드2

n=int(input())

a=list(map(int,input().split(" ")))
a.sort()



m=int(input())

b=list(map(int,input().split(" ")))


# for i in range(n):
#     print(a[i], end=" ")
    
# print("")
    
min=0
max=n-1

def binarysearch(num,l,s,e):
    global min
    global max
    
    #print("binarysearch",s,e)
    
    mid=(s+e)//2
    
    if s>e:
        return 0
    
    if l[mid]==num:
        if l[(mid+e)//2]==num:
            return binarysearch(num,l,mid+1,e)
        
        if l[(s+mid)//2]==num:
            return binarysearch(num,l,s,mid-1)
        
        
        return 0
        
    
    elif l[mid]>num:
        max=mid

        return binarysearch(num,l,s,mid-1)
        
    elif l[mid]<num:
        min=mid

        return binarysearch(num,l,mid+1,e)    

 

ans=[]

for i in range(m):
    min=0
    max=n-1
    binarysearch(b[i],a,0,n-1)
    cnt=0
    
    # print(b[i],min,max)
    

    for j in range(min,max+1):
        if(a[j]==b[i]):
            cnt+=1
    
    ans.append(cnt)
    

for i in range(m):
    print(ans[i],end=" ")