// Problem reference: https://www.hackerrank.com/challenges/grading/problem
// Predefined complexities: size = O(1), vector.begin = O(1), vector.erase(0) = O(1)
// Code complexity: ...

#include <iostream>
#include <bits/stdc++.h>

std::vector<int> gradingStudents(std::vector<int> grades){
  grades.erase(grades.begin());
  int gradesSize = int(grades.size());

  for(int i = 0; i < gradesSize; i++){
    int count = 0;
    if(grades[i] >= 38){
      while(count < 3){
        if((grades[i] + count) % 5 == 0){
          grades[i] += count;
        }
        count++;
      }
    }
  }
  return grades;
}

int main(){
  std::vector<int> result = gradingStudents({4,73,67,38,33}); // Expected output: {75, 67, 40, 33}
  for(int i = 0; i < int(result.size()); i++){
    printf("%d ", result[i]);
  }
  printf("\n");
}