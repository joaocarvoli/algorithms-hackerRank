// Problem reference: https://www.geeksforgeeks.org/program-find-sum-elements-given-array

#include <iostream>
#include <vector>

int sumArray(std::vector<int> array){
  int arraySize = int(array.size());
  int sum = 0;
  for(int i = 0; i < arraySize; i++){
    sum += array[i];
  }
  return sum;
}

int main(){
  int n = 0;
  std::vector<int> array;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    int input = 0;
    scanf("%d", &input);
    array.push_back(input);
  }

  int result = sumArray(array);
  printf("%d\n", result);
}