// Problem reference: https://www.geeksforgeeks.org/prefix-sum-2d-array/

#include <iostream>
#include <vector>
using Matrix = std::vector<std::vector<int>>;

Matrix prefixedSumMatrix(Matrix matrix){
  int columnsSize = matrix.size();
  int linesSize = matrix.at(0).size();
  
  for(int i = 0; i < columnsSize; i++){
    for(int j = 0; j < linesSize; j++){
      if(i == 0 && j != 0){
        matrix[i][j] += matrix[i][j - 1];
      }
      else {
        if(j != 0){
          matrix[i][j] += matrix[i][j - 1] + matrix[i - 1][j] - matrix[i - 1][j - 1];
        } else {
          matrix[i][j] += matrix[i - 1][j];
        }
      }
    }
  }
  return matrix;
}

int main(){
    Matrix matrix;
    int rows {0};
    int columns {0};

    std:: cin >> rows;
    std:: cin >> columns;

    int val = 0;
    for(int i = 0; i < rows; i++){
        std::vector<int> row;
        for(int j = 0; j < columns; j++){
            std::cin >> val;
            row.push_back(val);
        }
        matrix.push_back(row);
    }

  Matrix matrixResult = prefixedSumMatrix(matrix);
  for(int i = 0; i < columnsSize; i++){
  for(int j = 0; j < linesSize; j++){
    printf("%d ", matrix[i][j]);
  }
  printf("\n");
  }
}