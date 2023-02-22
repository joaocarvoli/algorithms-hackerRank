# Problem  reference: https://www.hackerrank.com/challenges/the-birthday-bar/problem
# Predefined complexities: len = O(1)
# Complexity: O(N)

def birthday(chocolate_squares: list, ron_birth_day: int, ron_birt_month: int) -> int:
    count_occurrence = 0
    sum = 0
    for i in range(len(chocolate_squares) - ron_birt_month + 1):
        for j in range(i, i + ron_birt_month):
            sum += chocolate_squares[j]
        if sum == ron_birth_day:
            count_occurrence += 1
        sum = 0
    return count_occurrence


print(birthday([1, 2, 1, 3, 2], 3, 2))  # Expected value: 2
print(birthday([1, 1, 1, 1, 1, 1], 3, 2))  # Expected value: 0
print(birthday([4], 4, 1))  # Expected value: 1
