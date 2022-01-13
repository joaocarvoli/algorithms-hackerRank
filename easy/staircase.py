def staircase(n):
    ceil = n - 1
    for i in range(1,n+1):
        print(" "*ceil + "#"*i)
        ceil = ceil - 1

staircase(4)