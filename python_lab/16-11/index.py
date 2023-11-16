def pattern(n):
    space=n-2
    num=1
    for x in range(1,n):
        print("a"*space+str(num)*num)
        space=space-1
        num=num+1
pattern(7)