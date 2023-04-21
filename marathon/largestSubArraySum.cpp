// Problem referece: https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
// The problem is called Largest Sum Contiguous Subarray and there is the Kadane’s Algorithm to solve this problem

#include <iostream>
#include <vector>
#include <algorithm>

int kadene(std::vector<int> array, int arraySize){

  int maxSumLocal = array[0];
  int maxSumGlobal = array[0];
  
  for(int i = 1; i < arraySize; i++){
    maxSumLocal = fmax(array[i], maxSumLocal + array[i]);
    if(maxSumLocal > maxSumGlobal) maxSumGlobal = maxSumLocal;
  }

  return maxSumGlobal;
}

int main(){
  int itemsAmount = 0;
  std::vector<int> array;

  scanf("%d", &itemsAmount);

  for(int i = 0; i < itemsAmount; i++){
    int item = 0;
    scanf("%d", &item);
    array.push_back(item);
  }

  int result = kadene(array, itemsAmount);
  printf("\nThe largest sum in this array is: %d", result);
}

