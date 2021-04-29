n=int(input())
a=list(map(int,input().split(' ')))
a_sort=list(sorted(set(a)))
a_dict={a_sort[i]:i for i in range(len(a_sort))}

for i in range(n):
  print(a_dict[a[i]], end=" ")