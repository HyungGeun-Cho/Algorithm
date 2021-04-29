# 수 찾기 - 이진탐색 문제

def binarysearch(num, l, s, e):
    if(s>e): return 0
    
    m=(s+e)//2
    
    if(l[m]==num): 
        return 1
    elif(l[m]>num):
        return binarysearch(num,l,s,m-1)
    else:
        return binarysearch(num,l,m+1,e)
    
    

n=int(input())

a=list(map(int,input().split(' ')))

a.sort()

m=int(input())

b=list(map(int,input().split(' ')))

for i in range(m):
    print(binarysearch(b[i],a,0,n-1))