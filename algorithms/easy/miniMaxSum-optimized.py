# Functions complexity: min: O(n), max: O(n), list.index: O(n), len: O(1), pop: O(n), insert: O(n)
def miniMaxSum(arr):
    minimum = min(arr)
    maximum = max(arr)
    
    arr.pop(arr.index(maximum)) # Popping the max in the array
    minimumSum = sum(arr)
    arr.pop(arr.index(minimum)) # Popping the max in the array
    
    arr.insert(1, maximum)      # Inserting the maximum in the array to calculate the another sum
    maximumSum = sum(arr)

    
    return print(minimumSum, maximumSum)

# Test cases

miniMaxSum([1,2,3,4,5])
miniMaxSum([5,5,5,5,5])
miniMaxSum([1,1,2,2,3,4,5])

"""
# Code complexity: 
elementary operation = ep

/-- SPACE --/
4 declared variables
>>> 4

/-- TIME --/
n*2ep + n*2ep + n + n*2ep + n + n
>>> 9n
>>> 0(n)
"""