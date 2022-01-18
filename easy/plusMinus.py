def plusMinus(arr):
    zero, one, lessOne = [0,0,0]
    for i in arr:
        if i == 0:
            zero = zero + 1 
        elif i > 0:
            one = one + 1 
        elif i < 0:
            lessOne = lessOne + 1
            
    result = []
    result.append(float("{:.6f}".format(one / len(arr))))
    result.append(float("{:.6f}".format(lessOne / len(arr))))
    result.append(float("{:.6f}".format(zero / len(arr))))
    for i in result:
        print(i)


plusMinus([-4, 3, -9, 0, 4, 1])

"""
# Code complexity: 

/-- SPACE --/
3 declared variables + 1*3
>>> 6

/-- TIME --/
3 elementary op + n*(1) elementary op + 1 elementary op + 3*2 elementary op 
>>> n + 10
>>> 0(n)
"""