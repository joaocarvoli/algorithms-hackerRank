# Problem definition: https://www.hackerrank.com/challenges/between-two-sets/problem
import libraries as lib

def getTotalX(a,b):
    countOfFactorsAndMultiples = 0

    for i in range(max(a), min(b) + 1):
        isFactorAndMultiple = True

        for element in a:
            if i % element != 0:
                isFactorAndMultiple = False
                break
        for element in b:
            if element % i != 0:
                isFactorAndMultiple = False
                break
        if isFactorAndMultiple == True: countOfFactorsAndMultiples = countOfFactorsAndMultiples + 1

    return print(countOfFactorsAndMultiples)

getTotalX([2,6],[24,36])