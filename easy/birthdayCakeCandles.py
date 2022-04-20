# Problem definition: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

def birthdayCakeCandles(candles):
    countTallestCandle = candles.count((max(candles)))
    return countTallestCandle

birthdayCakeCandles([3,2,1,3])