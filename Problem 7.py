import random

controlInt = 1
x = 0

##  Fermat primality test
##  NOTE:   THIS IS ONLY PRACTICAL WITH SMALLER NUMBERS
##          IF YOU ARE TESTING LARGER NUMBERS, INCREASE
##          THE RANGE IN "TIME" OR ELSE IT MAY RETURN
##          FALSE POSITIVES/NEGATIVES

def FermatPrimalityTest(number):
    if (number > 1):
        for time in range(30):
            randomNumber = random.randint(2, number)-1

            ##  Test if a^(n-1) = 1 mod n
            if(pow(randomNumber, number-1, number) != 1):
                return False
            
        return True
    else:
        ##  Case:  Number == 1
        return False

while x != 10001:
    controlInt += 1
    if FermatPrimalityTest(controlInt) == True:
        x += 1

print (controlInt)
print (x)

