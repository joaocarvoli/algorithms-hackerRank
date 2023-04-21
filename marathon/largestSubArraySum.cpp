// Problem referece: https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
// The problem is called Largest Sum Contiguous Subarray and there is the Kadane’s Algorithm to solve this problem

#include <iostream>
#include <vector>

int largestSubArraySum(std::vector<int> array, int arraySize){

  return 0;
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

  int result = largestSubArraySum(array, itemsAmount);
  printf("The largest sum in this array is: %d", result);
}

