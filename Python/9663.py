#백트래킹 - NQueen

n=int(input())

cnt=0

visited=[[0]*(n+1)]*(n+1)



def check(h,v):
    #가로, 세로

    
    
    for i in range(1,n+1):
        if visited[i][v]==1:
            return 0
        
        if visited[h][i]==1:
            return 0
    
    
            
    return 1
        
        

def queen(row,num):
    global cnt
    
    print("queen", row, num)

    
    for i in range(1,n+1):
            
        for j in range(1,n+1):                
            print(visited[i][j],end=" ")
            
        print("")
    print("")
                
    
    
    if(num==n):
        cnt=cnt+1
        
        print("okay", num)
            

        
        return
    
    
    for i in range(row,n+1):
      
        for j in range(1,n+1):
        
            if(check(i,j)==1 and visited[i][j]==0):
                visited[i][j]=1
                queen(row+1,num+1)
                visited[i][j]=0
    

    
queen(1,0)

print(cnt)