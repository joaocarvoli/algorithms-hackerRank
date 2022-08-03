# Problem definition: https://www.hackerrank.com/challenges/kangaroo/problem

def kangaroo(x1, v1, x2, v2):
    try:
        equation = (x1 - x2)/(v2 - v1)
        if equation > 0 and ((equation - int(equation)) == 0):
            return "YES"
        return "NO"
    except:
        return "NO"
     
print(kangaroo(2,1,1,2)) # expected: YES
print(kangaroo(0,2,5,3)) # expected: NO
print(kangaroo(0,3,4,2)) # expected: YES