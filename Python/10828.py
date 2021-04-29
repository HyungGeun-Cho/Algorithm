# STACK


class Stack:
    
    def __init__(self):
        self.array=[]
        self.top=-1
        self.max=10
        
        
    def IsEmpty(self):
        if(self.top<0):
            return True
        else:
            return False
        
    def IsFull(self):
        if(top>=max-1):
            return True
        else:
            return False

    def push(self, item):
        if not self.IsFull():
            self.array[++top]=item
        else:
            print("-1")
            
    
    def pop(self):
        if not self.IsEmpty():
            print(self.array[top])
            top--
    
    def size(self):
        print(self.top+1)

        
        
        
    