#!/usr/bin/env python
# -*- coding: utf8 -*-

from request import Request
from exception import AppException
from student import Student
import sys


def read_file(test_mode):
    f = None
    try:
        if test_mode:
            print("TEST_MODE")
            f = open("/workspace/Algorithm/Waffle/test-script.txt", "r") # 복구 필요
        else:
            f = sys.stdin
    except FileNotFoundError:
        print("File not found.")
        quit()

    while True:

        line = f.readline().rstrip()
        
        if line == "":
            break
            
        if line == "q":
            quit()
           
        try:
            request = Request(line)
            execute(request)
        except AppException as e:
            print(e)

global array
array=[]
            
# TODO: 파싱된 request 객체를 받아서 실제 동작을 실행하는 함수입니다.
# @param request 실행할 요청 객체
def execute(request):
    
    print(request.command)
    
    if request.command_number==0:
        request.add(array)
        
    
    elif request.command_number==1:
        request.delete(array)
    
    
    elif request.command_number==2:
        request.list(array)
        
    
    elif request.command_number==3:
        request.pin(array)
        
    
    elif request.command_number==4:
        request.unpin(array)
    
    elif request.command_number==5:
        sys.exit()
    
    

    

def main():
    test_mode = ""

    
    if len(sys.argv) > 1: # 파이썬 명령행 인자

        test_mode = sys.argv[1]
        print("OK2")

    # if test_mode == "--test":
    #     # print("TRUE")
    read_file(True) #탭 원위치 필요
    # else:
    #     # print("FALSE")
    #     read_file(False)

    

# main
if __name__ == '__main__':

    main()
    


# #!/usr/bin/env python
# # -*- coding: utf8 -*-

# from request import Request
# from exception import AppException
# from student import Student
# import sys


# def read_file(test_mode):
#     f = None
#     try:
#         if test_mode:
#             print("TEST_MODE")
#             f = open("test-script.txt", "r") # 복구 필요
#         else:
#             f = sys.stdin
#     except FileNotFoundError:
#         print("File not found.")
#         quit()

#     while True:

#         line = f.readline().rstrip()
        
#         if line == "":
#             break
           
#         try:
#             request = Request(line)
#             execute(request)
#         except AppException as e:
#             print(e)

# global array
# array=[]
            
# # TODO: 파싱된 request 객체를 받아서 실제 동작을 실행하는 함수입니다.
# # @param request 실행할 요청 객체
# def execute(request):
    

    
#     if request.command_number==0:
#         request.add(array)
        
    
#     elif request.command_number==1:
#         request.delete(array)
    
    
#     elif request.command_number==2:
#         request.list(array)
        
    
#     elif request.command_number==3:
#         request.pin(array)
        
    
#     elif request.command_number==4:
#         request.unpin(array)
    
#     elif request.command_number==5:
#         sys.exit()
    
    
# # 
    

# def main():
#     test_mode = ""

    
#     if len(sys.argv) > 1: # 파이썬 명령행 인자

#         test_mode = sys.argv[1]

#     if test_mode == "--test":
       
#         read_file(True) 
#     else:
        
#         read_file(False)

    

# # main
# if __name__ == '__main__':

#     main()
    
