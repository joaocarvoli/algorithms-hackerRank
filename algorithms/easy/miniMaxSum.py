# Links
# Time complexity of some functions: https://wiki.python.org/moin/TimeComplexity
# Functions complexity: [min and max: O(n)], [len: O(1)]

def miniMaxSum(arr):
    minimum = min(arr)
    maximum = max(arr)
    minimumSum, maximumSum = [0, 0]
    flagTomin, flagTomax = [0,0]

    for i in range(len(arr)):
        if arr[i] != maximum:
            minimumSum = minimumSum + arr[i]
        elif arr[i] == maximum:
            if flagTomax > 0:
                minimumSum = minimumSum + arr[i]
            flagTomax = flagTomax + 1
    

    for i in range(len(arr)):
        if arr[i] != minimum:
            maximumSum = maximumSum + arr[i]
        elif arr[i] == minimum:
            if flagTomin > 0:
                maximumSum = maximumSum + arr[i]
            flagTomin = flagTomin + 1


    return print(minimumSum, maximumSum)

# Test cases

miniMaxSum([1,2,3,4,5])
miniMaxSum([5,5,5,5,5])
miniMaxSum([1,1,2,2,3,4,5])

"""
# Code complexity: 
elementary operation = ep

/-- SPACE --/
6 declared variables
>>> 6

/-- TIME --/
n*2ep + 4ep + (n*4)*2ep
>>> 4 + 10n
>>> 0(n)
"""