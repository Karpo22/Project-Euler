import math

answerFound = False
a = 0
b = 0
c = 0

##  Find the number
while answerFound == False:
    a += 1
    while b < 1000:
        b += 1
        c = math.sqrt((a**2)+(b**2))
        if (a+b+c) == 1000:
            if (a < b) and (b < c):
                answerFound = True
                print ('A:', a, 'B:', b, 'C:', c)
                print (a*b*c)
    b = 0
    
    
