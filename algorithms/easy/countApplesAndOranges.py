# Problem reference: https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=false

def countApplesAndOranges(houseBegin,houseEnd,appleTree,orangeTree,apples,oranges):
    countApples, countOranges = [0,0]

    for apple in apples:
        if houseBegin <= (apple + appleTree) and (apple + appleTree) <= houseEnd:
            countApples = countApples + 1
    for orange in oranges:
        if houseBegin <= (orange + orangeTree) and (orange + orangeTree) <= houseEnd:
            countOranges = countOranges + 1

    print(countApples)
    print(countOranges)
    return None

countApplesAndOranges(7,10,4,12,[2,3,-4],[3,-2,-4])