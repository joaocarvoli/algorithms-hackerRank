// Problem  reference: https://www.hackerrank.com/challenges/apple-and-orange/problem
// Predefined complexities: size = O(1)
// Code complexity: O(N)

#include <iostream>
#include <bits/stdc++.h>

void countAppleOranges(int houseBegin, int houseEnd, int appleTree, int orangeTree,
 std::vector<int> apples, std::vector<int> oranges){

  int countApples = 0, countOranges = 0;
  int applesArraySize = int(apples.size());
  int orangesArraySize = int(oranges.size());

  for(int i = 0; i < applesArraySize; i++){
    if(houseBegin <= (apples[i] + appleTree) and (apples[i] + appleTree) <= houseEnd){
      ++countApples;
    }
  }

  for(int i = 0; i < orangesArraySize; i++){
    if(houseBegin <= (oranges[i] + orangeTree) and (oranges[i] + orangeTree) <= houseEnd){
      ++countOranges;
    }
  }
  printf("%d\n%d", countApples, countOranges);
}

int main(){
  countAppleOranges(7, 11, 5, 15, {-2, 2, 1}, {5, -6}); // Expected result: 1 1
}