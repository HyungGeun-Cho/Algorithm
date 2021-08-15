#!/usr/bin/env python
# -*- coding: utf8 -*-

from request import Request
from exception import AppException
from student import Student
import sys
# import os


def read_file(test_mode):
    f = None
    try:
        if test_mode:
            print("TEST_MODE")
            f = open("test-script.txt", "r")
        else:
            f = sys.stdin
    except FileNotFoundError:
        print("File not found.")
        quit()

    while True:
        
        line = f.readline().rstrip() # 가장 오른쪽의 개행문자 '\n' 제거
        
        if line == "":
            break
            
        if line == "q":
            break
   
        try:
            request = Request(line)
            execute(request)
        except AppException as e:
            print(e)
            
        

# Student 객체들을 저장하고 변경할 메인 list 생성
global array
array=[]
            

def execute(request):

    # request 객체의 메소드 실행 - command_number가 각 메소드와 대응
    
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
        sys.exit() # 프로그램 종료
    
      

def main():
    test_mode = ""
    
    if len(sys.argv) > 1: # 파이썬 명령행 인자
        test_mode = sys.argv[1]

    if test_mode == "--test":
        read_file(True) 
    else:
        read_file(False)

    

# main
if __name__ == '__main__':

    main()