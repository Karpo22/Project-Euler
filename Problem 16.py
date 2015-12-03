testNumber = 2**1000
cumulativeSum = 0
testAsString = str(testNumber)
for x in range (0, len(testAsString)):
    cumulativeSum += int(testAsString[x])
print(cumulativeSum)
