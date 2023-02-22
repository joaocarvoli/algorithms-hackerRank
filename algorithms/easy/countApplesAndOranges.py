# Problem reference: https://www.hackerrank.com/challenges/apple-and-orange/problem
# Complexity: O(n)

def count_apples_and_oranges(house_begin: int, house_end: int, apple_tree: int, orange_tree: int,
                             apples: list, oranges: list) -> None:
    count_apples, count_oranges = [0, 0]

    for apple in apples:
        if house_begin <= (apple + apple_tree) <= house_end:
            count_apples += 1
    for orange in oranges:
        if house_begin <= (orange + orange_tree) <= house_end:
            count_oranges += 1

    print(count_apples)
    print(count_oranges)


count_apples_and_oranges(7, 11, 5, 15, [-2, 2, 1], [5, -6])  # Expected value: 1 1
