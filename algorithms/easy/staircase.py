def staircase(n):
    ceil = n - 1
    for i in range(1,n+1):
        print(" "*ceil + "#"*i)
        ceil = ceil - 1

staircase(4)

"""
# Code complexity: 

/-- SPACE --/
1 declared variables
>>> 1

/-- TIME --/
1 elementary op + n elementary op
>>> 1 + n
>>> 0(n)
"""