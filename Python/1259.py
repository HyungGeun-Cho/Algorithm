# 펠린드롬수

def pellindrom(a):
    l=len(a)
    for i in range(l//2):
        if(a[i]!=a[l-(i+1)]):
            return "no"
        
    return "yes"

n=1

while(n!='0'):

    n=input()
    if(n=='0'):
        break
    print(pellindrom(n))