import sys

n = int(input())

sum = 0
num_list = []
count_list = [0 for i in range(8001)]
max = -5000
min = 5000


for i in range(1, n+1):
    temp = int(sys.stdin.readline())
    sum = sum + temp
    num_list.append(temp)

    if temp > max:
        max = temp

    if temp < min:
        min = temp

    count_list[temp+4000] = count_list[temp+4000] + 1

num_list.sort()

count_max = -1
count_first = -5000
count_second = -5000


for i in range(8000, -1, -1):

    if count_list[i] > count_max:
        count_max = count_list[i]
        count_first = i - 4000
        count_second = -5000

    elif count_list[i] == count_max:
        count_second = count_first
        count_first = i - 4000


print(round(sum/n))
print(num_list[int(n/2)])

if count_second == -5000:
    print(count_first)
else:
    print(count_second)

print(max - min)