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
        if arr[i] != minimum:
            maximumSum = maximumSum + arr[i]
    return print(minimumSum, maximumSum)

miniMaxSum([5,5,5,5,5])