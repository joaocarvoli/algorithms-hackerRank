def toFactor(number):
    quotient = 2
    factor = []
    while(number != 1):
        if(number%quotient == 0):
            number = number/quotient
            factor.append(quotient)
        else : quotient = quotient + 1
    return factor