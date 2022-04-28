def breakingRecords(scores):
    seasonMax = scores[0]
    seasonMin = scores[0]
    countMax, countMin = [0,0]

    for score in range(1,len(scores)):
        if(scores[score] > seasonMax):
            seasonMax = scores[score]
            countMax = countMax + 1
        elif(scores[score] < seasonMin):
            seasonMin = scores[score]
            countMin = countMin + 1

    return [countMax, countMin]

print(breakingRecords([10, 5, 20, 20, 4, 5, 2, 25, 1])) # [2, 4]
print(breakingRecords([3, 4, 21, 36, 10, 28, 35, 5, 24, 42])) # [4, 0]