# Problem  reference: https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=false

def birthday(chocolateSquares, ronBirthDay, ronBirthMonth):
    countOfOccurrence = 0
    sum = 0
    for i in range(len(chocolateSquares) - ronBirthMonth + 1):
        for j in range(i, i + ronBirthMonth):
            sum += chocolateSquares[j]
        if(sum == ronBirthDay): countOfOccurrence += 1
        sum = 0
    return countOfOccurrence


print(birthday([1,2,1,3,2], 3, 2)) # 2
print(birthday([1,1,1,1,1,1], 3, 2)) # 0
print(birthday([4], 4, 1)) # 1
