# 백트래킹 - N과 M(3)

n,m=map(int,input().split(' '))

arr=[0]*(m+1)
visited=[[0]*(m+1)]*(n+1)

# print(visited)


def check(num, cnt):

    if(cnt==m):
        for i in range(m):
            print(arr[i],end=" ")
        print("")
        return
        
    
    for i in range(1,n+1):
        if(visited[i][num]==0):
            visited[i][num]=1
            arr[cnt]=i
            check(num+1, cnt+1)
            visited[i][num]=0



check(1, 0)
