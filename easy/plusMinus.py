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
    