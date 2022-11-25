# Problem reference https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

def divisibleSumPairs(n, k, arr):
    countOfOccurrences = 0
    for i in range(n):
        for j in range(n):
            if i < j and (arr[i] + arr[j])%k == 0:
                countOfOccurrences+=1
    return countOfOccurrences


print(divisibleSumPairs(6, [1,2,3,4,5,6], 5)) # out: 3
print(divisibleSumPairs(6, [1, 3, 2, 6, 1, 2], 3)) # out: 5