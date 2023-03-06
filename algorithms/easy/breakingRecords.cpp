// Problem  reference: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
// Predefined complexities: size = O(1)
// Code complexity: O(N)

#include <iostream>
#include <bits/stdc++.h>

std::vector<int> breakingRecords(std::vector<int> scores){
  int seasonMin = scores[0], seasonMax = scores[0];
  int countMin = 0, countMax = 0;
  int scoresArraySize = int(scores.size());

  for(int i = 1; i < scoresArraySize; i++){
    if(scores[i] > seasonMax){
      seasonMax = scores[i];
      ++countMax;
    } else if(scores[i] < seasonMin){
      seasonMin = scores[i];
      ++countMin;
    }
  }
  return {countMax, countMin};
}

int main(){
  printf("[%d, %d]\n", breakingRecords({10, 5, 20, 20, 4, 5, 2, 25, 1})[0], breakingRecords({10, 5, 20, 20, 4, 5, 2, 25, 1})[1]);
  // Expected result: [2, 4]
  printf("[%d, %d]\n", breakingRecords({3, 4, 21, 36, 10, 28, 35, 5, 24, 42})[0], breakingRecords({3, 4, 21, 36, 10, 28, 35, 5, 24, 42})[1]);
  // Expected result: [4, 0]
}



