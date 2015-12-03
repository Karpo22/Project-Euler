import random

answer = 0

##  Fermat primality test
##  NOTE:   THIS IS ONLY PRACTICAL WITH SMALLER NUMBERS
##          IF YOU ARE TESTING LARGER NUMBERS, INCREASE
##          THE RANGE IN "TIME" OR ELSE IT MAY RETURN
##          FALSE POSITIVES/NEGATIVES

def FermatPrimalityTest(number):
    if (number > 1):
        if (number % 2) != 0:    
            for time in range(400):
                randomNumber = random.randint(2, number)-1

                ##  Test if a^(n-1) = 1 mod n
                if(pow(randomNumber, number-1, number) != 1):
                    return False
                
            return True
    else:
        ##  Case:  Number == 1
        return False

for x in range (2000000):
    if FermatPrimalityTest(x) == True:
        answer += x

print (answer)

