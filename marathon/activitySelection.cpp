// Problem referece: https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/

#include <iostream>
#include <vector>
#include <map>


int activitySelection(std::vector<int> startTimes, std::vector<int> finishTimes, int arraySize){

  return 0;
}

int main(){
  int itemsAmount = 0;
  std::vector<int> startTimes;
  std::vector<int> finishTimes;

  scanf("%d", &itemsAmount);

  for(int i = 0; i < itemsAmount; i++){
    int item = 0;
    scanf("%d", &item);
    startTimes.push_back(item);
  }

  for(int i = 0; i < itemsAmount; i++){
    int item = 0;
    scanf("%d", &item);
    finishTimes.push_back(item);
  }

  int result = activitySelection(startTimes, finishTimes, itemsAmount);
  printf("The max num of activies is: %d", result);
}



