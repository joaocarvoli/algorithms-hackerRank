// Problem  reference: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
// Predefined complexities: size = O(1), max_element = O(N)
// Code complexity: O(N)

#include <iostream>
#include <bits/stdc++.h>

int birthdayCakeCandles(std::vector<int> candles){
  int tallestCandle = *max_element(std::begin(candles), std::end(candles));
  int countTallestCandle = 0;
  int candlesArraySize = int(candles.size());

  for(int i = 0; i < candlesArraySize; i++){
    if(candles[i] == tallestCandle){
      ++countTallestCandle;
    }
  }
  return countTallestCandle;
}

int main(){
  printf("%d\n", birthdayCakeCandles({3, 2, 1, 3})); // Expected result: 2
  printf("%d\n", birthdayCakeCandles({1, 2, 0, 3})); // Expected result: 1
  printf("%d\n", birthdayCakeCandles({1, 1, 1, 1})); // Expected result: 4
}