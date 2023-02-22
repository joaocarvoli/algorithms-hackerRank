# Problem reference: https://www.hackerrank.com/challenges/diagonal-difference/problem
# Complexity: O(n^2)

def diagonal_difference(matrix: list) -> int:
    primary, secondary = [0, 0]
    for i in range(len(matrix)):
        for j in range(len(matrix)):
            if i == j:
                primary = primary + matrix[i][j]
            if (i + j) == (len(matrix) - 1):
                secondary = secondary + matrix[i][j]

    return abs(primary - secondary)


print(diagonal_difference([[11, 2, 4], [4, 5, 6], [10, 8, -12]]))  # Expected value: 15
