// Problem referece: https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/

#include <iostream>
#include <vector>

using VectorPairsInt = std::vector<std::pair<int, int> >;
using PairInts = std::pair<int, int>;

// Comparator function used in sort - decision based on hashmap key
bool cmp(std::pair<int, int>& a, std::pair<int, int>& b){
  return a.first < b.first;
}

VectorPairsInt convertArrayHash(std::vector<int> array, int arraySize){
  VectorPairsInt vectorPairs;

  for(int i = 0; i < arraySize; i++){
    PairInts pair;
    pair.first = array[i];
    pair.second = i;
    vectorPairs.push_back(pair);
  }

  sort(vectorPairs.begin(), vectorPairs.end(), cmp);

  return vectorPairs;
}

std::vector<int> activitySelection(std::vector<int> startTimes, std::vector<int> finishTimes, int arraySize){
  std::vector<int> activityExecutable;
  VectorPairsInt finishTimesMapOrdered = convertArrayHash(finishTimes, arraySize);
  activityExecutable.push_back(finishTimesMapOrdered[0].second);

  for(int i = 0; i < arraySize; i++){
    if(finishTimesMapOrdered[activityExecutable.back()].first < startTimes.at(i)){
      activityExecutable.push_back(i);
    }
  }

  return activityExecutable;
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

  std::vector<int> result = activitySelection(startTimes, finishTimes, itemsAmount);
  printf("Result");
  for(int i = 0; i < result.size(); i++){
    printf("%d\n", result.at(i));
  }
}



