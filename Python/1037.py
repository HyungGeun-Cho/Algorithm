# 정수론 및 조합론 - 약수

n=int(input())
a=list(map(int,input().split(' ')))
a.sort()
print(a[0]*a[n-1])