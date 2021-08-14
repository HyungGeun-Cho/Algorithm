# 와플스튜디오 19.5기 2번 문제
# 최적화하지 않은 상태

def time_calculate(f,c,x,n):
    time_sum=0
    for i in range(n):
        time_sum=time_sum+c/(f*i+2)

    time_sum=time_sum+x/(f*n+2)
    
    return time_sum


def solve(f, c, x):

    min_t=9999999999999999
    
    n=0
    
    while True:

        
        f=float(f)
        c=float(c)
        x=float(x)
        
        temp=time_calculate(f,c,x,n)

        if temp<min_t:
            min_t=temp
            n+=1
        
        elif temp>=min_t:
            print('{} {:.5f}'.format(n-1, min_t))
            break
    
    

while True:
    
    a=input()
    if a=='':
        break
    
    f,c,k=map(int,a.split(" "))
    
        
    solve(f, c, k)
    
