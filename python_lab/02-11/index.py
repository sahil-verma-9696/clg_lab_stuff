def isArmstrong():
    number = input("enter the number\n") 
    length = len(number) 
    sum = 0 
    for x in number:
        sum += int(x)**length 
        if(sum == int(number)):
            print("number is armstrong\n") 
        else:
            print("number is not armstrong")     
    print(sum) 
       

def isPrime(x):
    flag = False 
    for elem in range(2,x):
        if(x%elem == 0):
            flag = True 
            break 
    if(flag):
        print('number is not prime') 
    else:
        print("numberr is prime",x)
    
def factorial(x):
    ans = 1 
    for elem in range(1,x+1):
        ans *= elem 
    print(ans)
        
def isPalindrom(x):
    val = str(x)
    rev = ""
    for elem in range(len(val)-1,-1,-1):
        rev += val[elem]
    if(rev == val):
        print("palindrom")
    else:
        print("palindrom")

def printPrime(start,end):
    for x in range(start,end):
        isPrime(x)
        
def printFibonnacciNumber(_range):
    a = 0
    b = 1
    for elem in range(1,_range):
        c = a + b
        if(elem ==  _range-1):
            print(c)
        a = b 
        b = c
        
    
# isArmstrong()
# isPrime(3)
# factorial(5)
# isPalindrom("mam")
# printPrime(1,10)
# printFibonnacciNumber(3)