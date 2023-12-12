// Problem reference: https://www.hackerrank.com/challenges/between-two-sets/problem
// Predefined complexities: size = O(1), max_element = O(N), min_element = O(N)
// Code complexity: ...

#include <iostream>
#include <bits/stdc++.h>

int getTotalX(std::vector<int> a, std::vector<int> b){
  int countOfFactorsAndMultiples = 0;
  int sizeA = int(a.size()), sizeB = int(b.size());
  int maxA = *max_element(std::begin(a), std::end(a));
  int minB = *min_element(std::begin(b), std::end(b));

  for(int i = maxA; i < minB + 1; i++){
    bool isFactorAndMultiple = true;

    for(int j = 0; j < sizeA; j++){
      if((i % a[j]) != 0){
        isFactorAndMultiple = false;
        break;
      }
    }

    for(int k = 0; k < sizeB; k++){
      if((b[k] % i) != 0){
        isFactorAndMultiple = false;
        break;
      }
    }

    if(isFactorAndMultiple) countOfFactorsAndMultiples++;
  }
  return countOfFactorsAndMultiples;
}

int main(){
  printf("%d\n", getTotalX({2, 4}, {16, 32, 96})); // Expected output: 3
  printf("%d\n", getTotalX({3, 4}, {24, 48})); // Expected output: 2
}