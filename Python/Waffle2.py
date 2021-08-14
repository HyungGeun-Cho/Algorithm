# 와플스튜디오 19.5기 2번 문제


def time_calculate(f,c,x,n):
    
    f=float(f)
    c=float(c)
    x=float(x)
    
    time_sum=0
    for i in range(n):
        time_sum=time_sum+c/(f*i+2)

    time_sum=time_sum+x/(f*n+2)
    
    return time_sum

def binarysearch(num,s,e,f,c,x):
 
    # print(num,s,e)
    
    mid=(s+e)//2
    
    
    if(s>e): 
        if time_calculate(f,c,x,s)>time_calculate(f,c,x,s+1):
            temp=s
            while True:
                
                if time_calculate(f,c,x,temp)<time_calculate(f,c,x,temp+1):
                    return temp
                    break
                temp+=1
        return s

    if(time_calculate(f,c,x,mid)==num):
        print("same")
        
        if time_calculate(f,c,x(mid+e)//2)==num:
            return binarysearch(num,mid+1,e,f,c,x)
        
        return num
    
    
    elif(time_calculate(f,c,x,mid)<num):
        if(time_calculate(f,c,x,mid)>time_calculate(f,c,x,(mid+e)//2)):
            num=time_calculate(f,c,x,(mid+e)//2)
            return binarysearch(num,mid+1,e,f,c,x)
    
        else:
            num=time_calculate(f,c,x,mid)
            return binarysearch(num,s,mid-1,f,c,x)
    
    
    else:               
        return binarysearch(num,mid+1,e,f,c,x)


def solve(f, c, x):

    n=0
     
    f=float(f)
    c=float(c)
    x=float(x)
    
    min_t=time_calculate(f,c,x,int(x/f))
        
    return binarysearch(min_t,0,int(x/f),f,c,x)

while True:
    
    a=input()
    if a=='':
        break
    
    f,c,x=map(int,a.split(" "))
    
    n=solve(f,c,x)
    

    # if(time_calculate(f,c,x,1853)==time_calculate(f,c,x,1852)):
    #     print("0")
    # elif time_calculate(f,c,x,1853)>time_calculate(f,c,x,1852):
    #     print(-1)
    # else:
    #     print(1)
              
    print("{} {:.5f}".format(n, time_calculate(f,c,x,n)))
    
#print(time_calculate(4,23,43142,1872), time_calculate(4,23,43142,1852))
