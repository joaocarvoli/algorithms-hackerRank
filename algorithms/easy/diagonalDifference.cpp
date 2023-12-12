// Problem  reference: https://www.hackerrank.com/challenges/diagonal-difference/problem
// Predefined complexities: size = O(1)
// Code complexity: O(N^2)

#include <iostream>
#include <bits/stdc++.h>

int diagonalDifference(std::vector<std::vector<int>> matrix){
  int primary = 0, secondary = 0;
  int matrixCol = int(matrix.size());
  int matrixRow = int(matrix[0].size());

  for(int i = 0; i < matrixCol; i++){
    for(int j = 0; j < matrixRow; j++){
      if(i == j){
        primary += matrix[i][j];
      } 
      if((i + j) == (matrixCol - 1)){
        secondary += matrix[i][j];
      }
    }
  }

  return abs(primary - secondary);
}

int main(){
  printf("%d", diagonalDifference({{11, 2, 4}, {4, 5, 6}, {10, 8, -12}})); // Expected result: 15
}

