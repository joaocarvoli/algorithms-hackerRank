def diagonalDifference(arr):
    primary, secondary = [0,0]
    for i in range(len(arr)):
        for j in range(len(arr)):
            if i == j:
                primary = primary + arr[i][j]
            if (i + j) == (len(arr) - 1):
                secondary = secondary + arr[i][j]

    return print(abs(primary - secondary))

diagonalDifference([[11, 2, 4] ,[4, 5, 6] ,[10, 8, -12]])

"""
# Code complexity: 
elementary operation = ep

/-- SPACE --/
2 declared variables
>>> 2

/-- TIME --/
n*n*(2n)
>>> 2n^3
>>> 0(n^3)
"""