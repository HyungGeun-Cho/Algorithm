# 백트래킹 - N과 M(2)

n,m=map(int,input().split(' '))

arr=[0]*(m+1)
visited=[0]*(n+1)


def check(num, cnt):

    if(cnt==m):
        for i in range(m):
            print(arr[i],end=" ")
        print("")
        return
        
    
    for i in range(num,n+1):
        if(visited[i]==0):
            visited[i]=1
            arr[cnt]=i
            check(i+1, cnt+1)
            visited[i]=0



check(1, 0)
