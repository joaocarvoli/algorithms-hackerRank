// Problem reference: https://www.hackerrank.com/challenges/migratory-birds/problem
// Predefined complexities: size = O(1), vector.begin = O(1), vector.erase(0) = O(1)
// Code complexity: ...
#include <iostream>
#include <bits/stdc++.h>

using intMap = std::unordered_map<int, int>;
using intVec = std::vector<int>;


intMap initializeMemory(intVec birds){
  intMap map;
  int maxVec = *max_element(std::begin(birds), std::end(birds));
  int minVec = *min_element(std::begin(birds), std::end(birds));

  for(int i = minVec; i <= maxVec; i++){
    map[i] = 0;
  }

  return map;
}


int migratoryBirds(intVec birds){

}

int main(){
  intMap map = initializeMemory({1,2,3});
  for(auto item : map){
    std::cout << item.first << " " << item.second << "\n";
  }
}