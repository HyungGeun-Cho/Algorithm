# 이분탐색 - 숫자카드2

n=int(input())

a=list(map(int,input().split(" ")))
a.sort()

m=int(input())

b=list(map(int,input().split(" ")))

arr=[0]*20000001


for i in range(n):
    arr[a[i]+10000000]+=1
    
for i in range(m):
    print(arr[b[i]+10000000], end=" ")