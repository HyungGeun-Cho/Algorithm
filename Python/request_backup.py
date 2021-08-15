
from enum import Enum
from student import Student

class Command(Enum):
    ADD = (0, "add")
    DELETE = (1, "delete")
    LIST = (2, "list")
    PIN = (3, "pin")
    UNPIN = (4, "unpin")
    QUIT = (5, "q")

class Option(Enum):
    r = (0, "-r")
    o = (1, "-o")
    g = (2, "-g")
    n = (3, "-n")
    a = (4, "-a")

class Request:
    # TODO: fields/attributes
    # TODO: constructor
    def __init__(self, command):
        self.command=command
        
        self.command_number=-1
        

        command.strip('\n')
        
        self.command_line=list(command.split(" "))


        
        for i in Command:
            if self.command_line[0]==i.value[1]:
                self.command_number=i.value[0]
                break
            
            
    def add(self, array_1):

        temp_array=list(array_1)
        # 옵션 별로 유지보수 할 수 있도록 변경!!!

        if self.command_line[1]==Option.a.value[1]:

            for i in range(int((len(self.command_line)-2)/2)):
                temp_student=Student(self.command_line[2+i*2], self.command_line[3+i*2])
                
                for j in temp_array:

                    if temp_student.__eq__(j)==True:
                        print("Error 100")
                        return array_1
                    

                temp_array.append(temp_student)

            
            for i in range(int((len(self.command_line)-2)/2)):
                temp_student=Student(self.command_line[2+i*2], self.command_line[3+i*2])
                
             
                array_1.append(temp_student)

                
                

                
                
            return array_1
            
        else:
            temp_student=Student(self.command_line[1], self.command_line[2])
            
            for j in array_1:
                    if temp_student.__eq__(j)==True:
                        print("Error 100")
                        return array_1              
                
            
            array_1.append(temp_student)
            

 
            
            return array_1
        
        
    def delete(self, array_1):
        temp_student=Student(self.command_line[1], self.command_line[2])
        factor=False
        
        for i in array_1:
            if temp_student.__eq__(i)==True:
                array_1.remove(i)
                factor=True
                break
            
        if factor==False:
            print("Error 200")
                
        
        
    def list(self,array_1):
        

        
        return_array=list(array_1)
        

        reverse_factor=False
        
        pin_array=[]
        unpin_array=[]
        
        # pin 처리 된 Student -> list로 구분
        for i in return_array:
            if i.get_pin()==1:
                pin_array.append(i)
            else:
                unpin_array.append(i)

                
        if len(self.command_line)==1:
            for i in range(len(pin_array)):
                print(pin_array[i].__str__())
            for i in range(len(unpin_array)):
                print(unpin_array[i].__str__())
            
        else:
            for i in range(len(self.command_line)):
                for option in Option:
                    if self.command_line[i]==option.value[1]: 
                        if option.value[0]==0:
                            reverse_factor=True
                            continue
                        else:
                            pin_array=self.list_option(option.value[0], pin_array, i)
                            unpin_array=self.list_option(option.value[0], unpin_array, i)
            
            if reverse_factor==True:
                pin_array.reverse()
                unpin_array.reverse()
         
       

            for i in range(len(pin_array)):
                print(pin_array[i].__str__())
            
            
            for i in range(len(unpin_array)):
                print(unpin_array[i].__str__())
            
    
                    
                    
    def list_option(self,option_number,array_2,index):

      
        temp_array=list(array_2)
        
                       
        if option_number==1: # order
            
            if self.command_line[index+1]=="grade": # order-grade
                temp_array_2=temp_array
                temp_array=[]
                temp_array=sorted(temp_array_2, key=lambda x: x.get_grade())                
                
                return temp_array

            elif self.command_line[index+1]=="name": # order-name
                temp_array_2=temp_array
                temp_array=[]
                
                temp_array=sorted(temp_array_2, key=lambda x: x.get_name())
                
                return temp_array
            
            elif self.command_line[index+1]=="added": # order-added
                return temp_array

                                
        elif option_number==2: # grade
            temp_array=[]

            for i in array_2:
                if i.get_grade()==int(self.command_line[index+1]):
                    temp_array.append(i)
                    
            return temp_array


        elif option_number==3: # name
            temp_array=[]

            for i in array_2:
                if i.get_name()==self.command_line[index+1]:
                    temp_array.append(i)

            return temp_array

        
        

    def pin(self, array_1):
        
        
        temp_student=Student(self.command_line[1], self.command_line[2])
        factor=False
        
        for i in array_1:
            
            if temp_student.__eq__(i)==True:
                i.set_pin(1)
                factor=True
                break
            
        if factor==False:
            print("Error 200")
            
        else:
            return array_1
        
        
    def unpin(self, array_1):
        temp_student=Student(self.command_line[1], self.command_line[2])
        factor=False
        
        for i in array_1:
            if temp_student.__eq__(i)==True:
                i.set_pin(None)
                factor=True
                break
            
        if factor==False:
            print("Error 200")
            
        else:
            return array_1
    
    
  