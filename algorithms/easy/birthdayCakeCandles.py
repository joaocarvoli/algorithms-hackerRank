# Problem definition: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
# Predefined complexities: max = O(N), len = O(1)
# Complexity: O(n)

def birthday_cake_candles(candles: list) -> int:
    tallest_candle = max(candles)
    count_tallest_candle = 0

    for i in candles:
        if i == tallest_candle:
            count_tallest_candle += 1
    return count_tallest_candle


birthday_cake_candles([3, 2, 1, 3])  # Expected value: 2
