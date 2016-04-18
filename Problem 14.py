##  THIS IS TO TEST HOW GITHUB WORKS

testNumber = 13
tempNumber = 0
highestNumber = 0
highestSequence = 0
sequenceCounter = 0

## Find which number provides the longest sequence
while testNumber <= 1000000:
    testNumber += 1
    tempNumber = testNumber
    while tempNumber != 2:
        if tempNumber%2 == 0:
            tempNumber /= 2
            sequenceCounter += 1
        else:
            tempNumber = (3*tempNumber)+1
            sequenceCounter += 1

    if sequenceCounter >= highestSequence:
        highestSequence = sequenceCounter
        highestNumber = testNumber
        sequenceCounter = 0
        print(highestNumber)
    else:
        sequenceCounter = 0

print(highestNumber)

