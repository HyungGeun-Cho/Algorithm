# 랜선 자르기



n,m=map(int, input().split(" "))

a=[]

for i in range(n):
    temp=int(input())
    a.append(temp)
    
a.sort()


def check(num):
    
    #print("check")
    #print(num)
    cnt=0
    for i in range(n):
        cnt=cnt+a[i]//num
        
    #print("cnt", cnt)
    

        
    return cnt
            


def binarysearch(num, l, s, e):
    
    
    #print("binarysearch",s,e)
    
    mid=(s+e)//2
    

    
    if(s>e): return e

    if(check(mid)==num):
        if check((mid+e)//2)==num:
            return binarysearch(num,l,mid+1,e)
        return mid
    elif(check(mid)<num):
        return binarysearch(num,l,s,mid-1)
    else:
                
        return binarysearch(num,l,mid+1,e)




ans=binarysearch(m,a,1,a[n-1])


while(check(ans+1)==m):
    #print("while", ans)
    ans=ans+1
    if check(ans)!=m: break
    
print(ans)
