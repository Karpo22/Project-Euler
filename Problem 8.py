##  Variables
highestValue = 0
intContainer = 1
lowerBound = 0
spotHolder = 0

f = open("/Users/karp/Desktop/Numbers.rtf", "r")
lines = f.read().splitlines()
##  Strip only to digits then store in control string
cleaned = [x for x in lines if x[:1].isdigit()]
controlString = ''
for x in cleaned:
    for i in x:
        if i.isdigit() == True:
            controlString += i

##  Find highest consecutive 13 digits products
while lowerBound <= (len(controlString) - 13):
    spotHolder = lowerBound
    for i in range (0, 13):
        intContainer *= int(controlString[lowerBound])
        lowerBound += 1
    if intContainer > highestValue:
        highestValue = intContainer
    intContainer = 1
    lowerBound = (spotHolder + 1)

print(highestValue)

        
    

