// Problem  reference: https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
// Predefined complexities: size = O(1)
// Code complexity: O(N^2)

#include <iostream>
#include <bits/stdc++.h>

int divisibleSumPairs(int n, int k, std::vector<int> array){
  int countOccurrences = 0;
  int arraySize = int(array.size());

  for(int i = 0; i < arraySize; i++){
    for(int j = 0; j < arraySize; j++){
      if((i < j) and (array[i] + array[j])%k == 0){
        ++countOccurrences;
      }
    }
  }

  return countOccurrences;
}

int main(){
  printf("%d\n", divisibleSumPairs(6, 5, {1, 2, 3, 4, 5, 6})); // Expected result: 3
  printf("%d\n", divisibleSumPairs(6, 3, {1, 3, 2, 6, 1, 2})); // Expected result: 5
}