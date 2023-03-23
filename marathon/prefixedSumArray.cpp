// Problem reference: https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/

#include <iostream>
#include <vector>

std::vector<int> prefixedSumArray(std::vector<int> vector, int size){
  for(int i = 1; i < size; i++){
    vector[i] += vector[i - 1];
  }
  return vector;
}

int main(){
  std::vector<int> result = prefixedSumArray({10, 20, 10, 5, 15}, 5);
  for(int i = 0; i < result.size(); i++){
    printf("%d ", result[i]);
  }
}