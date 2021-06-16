# 백트래킹 - N과 M(4)

n,m=map(int,input().split(' '))

arr=[0]*(m+1)
visited=[[0]*(m+1)]*(n+1)


def check(num, cnt, start):
    
    if cnt==m:
        for i in range(m):
            print(arr[i],end=" ")
        print("")
        return
    
    for i in range(start,n+1):
        if visited[i][num]==0:
            visited[i][num]=1
            arr[cnt]=i
            check(num+1,cnt+1,i)
            visited[i][num]=0
            
            
            
            
            
            
            
check(1, 0, 1)