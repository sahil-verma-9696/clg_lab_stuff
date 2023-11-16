def starPattern(n):
    space=n-2
    star=1
    for x in range(1,n):
        print(" "*space+"*"*star)
        space=space-1
        star=star+2

def numPattern(n):
    space = n-1
    num = 1
    timesOfNum = 1
    for x in range(n):
        strNum = str(num)
        print(" "*space + strNum*timesOfNum )
        num = num+1
        timesOfNum = timesOfNum + 2
        space = space-1

def reverseStarPattern(n):
    space = 0 
    star = n + (n-1)
    for x in range(n):
        print(" "*space + "*"*star)
        space = space + 1
        star = star-2    

def reverseNumPattern(n):
    space = 0
    num = n
    timesOfNum = n + (n-1)   
    for x in range(n):
        print(" "*space + str(num)*timesOfNum)
        num = num-1
        space = space + 1
        timesOfNum = timesOfNum - 2

#reverseNumPattern(5)
#reverseStarPattern(5)
#numPattern(5)
#starPattern(7)