# Problem definition: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
# Predefined complexities: max = O(N), len = O(1)
# Complexity: O(n)

def breaking_records(scores: list) -> list:
    season_max = scores[0]
    season_min = scores[0]
    count_max, count_min = [0, 0]

    for score in range(1, len(scores)):
        if scores[score] > season_max:
            season_max = scores[score]
            count_max = count_max + 1
        elif scores[score] < season_min:
            season_min = scores[score]
            count_min = count_min + 1

    return [count_max, count_min]


print(breaking_records([10, 5, 20, 20, 4, 5, 2, 25, 1]))  # Expected value: [2, 4]
print(breaking_records([3, 4, 21, 36, 10, 28, 35, 5, 24, 42]))  # Expected value: [4, 0]
