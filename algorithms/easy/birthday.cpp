// Problem  reference: https://www.hackerrank.com/challenges/the-birthday-bar/problem
// Predefined complexities: size = O(1)
// Code complexity: O(N)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> chocolateSquares, int ronBirthDay, int ronBirthMonth){
  int countOccurrence = 0, sum = 0;
  int chocolateSquaresSize = int(chocolateSquares.size());

  for(int i = 0; i < chocolateSquaresSize - ronBirthMonth + 1; i++){
    for(int j = i; j < i + ronBirthMonth; j++){
      sum += chocolateSquares[j];
    }
    if(sum == ronBirthDay){
      countOccurrence += 1;
    }
    sum = 0;
  }

  return countOccurrence;
}

int main(){
  printf("%d\n", birthday({1, 2, 1, 3, 2}, 3, 2)); // Expected result: 2
  printf("%d\n", birthday({1, 1, 1, 1, 1, 1}, 3, 2)); // Expected result: 0
  printf("%d\n", birthday({4}, 4, 1)); // Expected result: 1
}