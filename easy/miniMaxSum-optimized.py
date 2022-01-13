def miniMaxSum(arr):
    minimum = set([min(arr)])
    maximum = set([max(arr)])
    return print(sum(set(arr) ^ maximum), sum(set(arr) ^ minimum))


miniMaxSum([1,2,3,4,5])
# Strategy: I take the minimum and maximum of the arr and for each one, we calculate its symmetric difference.
# Example: arr = [1,2,3,4,5], mininum = 1 and maximum = 5.
# The symmetric difference in relation to arr using maximum is [1,2,3,4]
# The symmetric difference in relation to arr using minimum is [2,3,4,5]    