# 와플스튜디오 19.5기 1번 문제 - HyungGeun_Cho

import numpy as np



n,p,k=map(int, input().split(" ")) #수강생 수, 시험의 문제 수, 각 문제의 보기 개수 입력


a=[[]*(p+1)]*n # 학생들 [학번, 문제 답안] 리스트 생성

for i in range(n):
    a[i]=list(map(int, input().split(" "))) # 학생별 학번 및 문제 답안 입력


answer=list(map(int, input().split(" "))) # 답안 입력

a.sort() # 학번 순으로 정렬


score_list=[]

for i in range(n):
     score_list.append(sum(np.equal(a[i][1:],answer)))
              

rank_list=[]

for i in range(n):
    rank=1
    for j in score_list:
        if score_list[i]<j:
            rank+=1
    rank_list.append(rank)
    
    
for i in range(n):
    print("Student #{}: {} {}".format(a[i][0],score_list[i],rank_list[i]))

              
# class Student:
    
#     def __init__(self):
#         self.StudentNo=0
#         self.submit=[]*100
#         self.score=0


# Student_list = [ Student() for i in range(n) ]


# for i in range(n):
#     a=list(map(int,sys.stdin.readline().split(" ")))
    
#     Student_list[i].StudentNo=a[0]

    