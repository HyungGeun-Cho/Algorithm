
from enum import Enum
from student import Student

class Command(Enum): # (번호, 입력문 형태)
    ADD = (0, "add")
    DELETE = (1, "delete")
    LIST = (2, "list")
    PIN = (3, "pin")
    UNPIN = (4, "unpin")
    QUIT = (5, "q")

class Option(Enum):  # (번호, 입력문 형태)
    r = (0, "-r")
    o = (1, "-o")
    g = (2, "-g")
    n = (3, "-n")
    a = (4, "-a")

class Request:

    def __init__(self, command):
        self.command=command          
        self.command_number=-1                      # Command 클래스에서처럼 각 메소드를 지칭하는 번호 역할, -1은 초기값 
        self.command_line=list(command.split(" "))  # 입력받은 문자열을 공백을 기준으로 나누어 list 생성

        
        # enum 활용해 제시된 입력문따라 command_number 결정 -> main.py에서 각 method 실행
        for i in Command:  
            if self.command_line[0]==i.value[1]: 
                self.command_number=i.value[0]  
                break
            
    ##  add method ##        
    def add(self, array_1):  # array_1 : main.py array 매개변수
        temp_array=list(array_1)   # 동명이인 탐색을 위한 원본copy 임시 list

        # -a 옵션이 있는 경우
        if self.command_line[1]==Option.a.value[1]: 

            # 동명이인 탐색과정 - ex) add -a 1 aaaaa 1 aaaaa 등등 중복여부 처리
            for i in range(int((len(self.command_line)-2)/2)):
                temp_student=Student(self.command_line[2+i*2], self.command_line[3+i*2])  # 입력 값을 바탕으로 추가하고자 하는 Student 임시 객체 생성
                                
                for j in temp_array:
                    # 동명이인 발생 시 Error
                    if temp_student.__eq__(j)==True:
                        print("Error 100")
                        # 아무 변동 없이 바로 array_1 리턴
                        return array_1

                temp_array.append(temp_student)

            # 동명이인 문제없음 확인 후 새로운 Student 객체 list에 추가
            for i in range(int((len(self.command_line)-2)/2)):
                temp_student=Student(self.command_line[2+i*2], self.command_line[3+i*2])
                array_1.append(temp_student)
                
            return array_1
       
        # -a 옵션이 없는 경우    
        else: 
            temp_student=Student(self.command_line[1], self.command_line[2])
            
            # 동명이인 탐색과정
            for j in array_1:
                    # 동명이인 발생 시 Error
                    if temp_student.__eq__(j)==True:
                        print("Error 100")
                        return array_1              
          
            array_1.append(temp_student)
            
            return array_1
        
    ## delete method ##    
    def delete(self, array_1):
        temp_student=Student(self.command_line[1], self.command_line[2]) # 삭제하고자 하는 Student 객체 비교대상
        factor=False # 대상 학생 존재 여부
        
        # delete 대상 탐색
        for i in array_1:
            # 존재할 경우 list에서 제거
            if temp_student.__eq__(i)==True:
                array_1.remove(i)
                factor=True
                break
        # 대상 학생이 존재하지 않을 경우 Error
        if factor==False:
            print("Error 200")
                
        
    ## list method ##        
    def list(self,array_1):
        temp_array=list(array_1)  # 추후 pin 여부에 따라 구분 위한 원본copy 임시 list
        reverse_factor=False      # -r 옵션 여부 
        pin_array=[]              # pin된 Student 객체 저장 list
        unpin_array=[]            # pin되지 않은 Student 객체 저장 list
        
        # pin 처리 여부에 따라 Student 객체-> list로 구분
        for i in temp_array:
            if i.get_pin()==1:
                pin_array.append(i)
            else:
                unpin_array.append(i)

        # list 옵션이 없는 경우 : pin-unpin 입력 순서대로 출려      
        if len(self.command_line)==1:
            for i in range(len(pin_array)):
                print(pin_array[i].__str__())
            for i in range(len(unpin_array)):
                print(unpin_array[i].__str__())
        
        # list 옵션이 있는 경우
        else:
            # 처음부터 끝까지 옵션 탐색
            for i in range(len(self.command_line)):
                for option in Option:
                    if self.command_line[i]==option.value[1]: 
                        # -r 옵션
                        if option.value[0]==0:
                            reverse_factor=True
                            continue
                        # -r 이외 먼저 처리가 필요한+복잡한 옵션들 list_option 클래스에서 pin, unpin list 각각 처리
                        else:
                            pin_array=self.list_option(option.value[0], pin_array, i)
                            unpin_array=self.list_option(option.value[0], unpin_array, i)
            
            # -r 옵션이 포함된 경우 출력 직전 reverse
            if reverse_factor==True:
                pin_array.reverse()
                unpin_array.reverse()
       
            # pin-unpin순으로 출력
            for i in range(len(pin_array)):
                print(pin_array[i].__str__())

            for i in range(len(unpin_array)):
                print(unpin_array[i].__str__())
            
    
                    
    # list -o -g -n 옵션 처리 method                
    def list_option(self,option_number,array_2,index):  # (option_number:옵션 종류번호, array_2:처리 대상 list, index:command_line 입력문에서 option index)
        temp_array=list(array_2)  # 처리 대상 원본copy 임시 list (소실 방지)
        
        # list -o 옵션
        if option_number==1: 
            if self.command_line[index+1]=="grade": # order-grade
                temp_array_2=temp_array
                temp_array=[]
                temp_array=sorted(temp_array_2, key=lambda x: x.get_grade()) # 학년 순으로 정렬                
                return temp_array

            elif self.command_line[index+1]=="name": # order-name
                temp_array_2=temp_array
                temp_array=[]
                temp_array=sorted(temp_array_2, key=lambda x: x.get_name()) # 이름 순으로 정렬
                return temp_array
            
            elif self.command_line[index+1]=="added": # order-added (기본값)
                return temp_array

            
        # list -g 옵션                        
        elif option_number==2: 
            temp_array=[]  # 제시된 학년의 Student 객체들만 모으기 위한 list
            
            # 해당 학년의 객체들만 temp_array에 추가
            for i in array_2:
                if i.get_grade()==int(self.command_line[index+1]):
                    temp_array.append(i)
                    
            return temp_array

        # list -n 옵션 
        elif option_number==3: 
            temp_array=[]  # 제시된 이름의 Student 객체들만 모으기 위한 list
            
            # 해당 이름의 객체들만 temp_array에 추가
            for i in array_2:
                if i.get_name()==self.command_line[index+1]:
                    temp_array.append(i)

            return temp_array
       
        
    ## pin method ##
    def pin(self, array_1):
        temp_student=Student(self.command_line[1], self.command_line[2]) # pin처리 Student 객체 비교대상
        factor=False # 대상 학생 존재 여부
        
        # pin처리 대상 탐색
        for i in array_1:
            # 존재할 경우 pin처리
            if temp_student.__eq__(i)==True:
                i.set_pin(1)
                factor=True
                break
        
        # 대상 학생이 존재하지 않을 경우 Error
        if factor==False:
            print("Error 200")
            
        else:
            return array_1
        
        
    ## unpin method ##    
    def unpin(self, array_1):
        temp_student=Student(self.command_line[1], self.command_line[2]) # unpin처리 Student 객체 비교대상
        factor=False # 대상 학생 존재 여부
                
        # unpin처리 대상 탐색
        for i in array_1:
            # 존재할 경우 unpin처리
            if temp_student.__eq__(i)==True:
                i.set_pin(None)
                factor=True
                break
        
        # 대상 학생이 존재하지 않을 경우 Error
        if factor==False:
            print("Error 200")
            
        else:
            return array_1