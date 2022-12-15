// Problem reference: https://www.hackerrank.com/challenges/arrays-ds/problem
// Solution complexity: O(n)
// *size(), push_back() and at() has constant complexity*

#include <iostream>
#include<vector> 
using namespace std;

vector<int> reverseVector(vector<int> regularVector){
  int size = regularVector.size();
  vector<int> reversedVector;

  for(int i = 0; i < size; i++) reversedVector.push_back(regularVector.at(size - i - 1));
  return reversedVector;
}

int main(){
  vector<int> arrayTest = {1,2,3,4,5,6,7,8}; 
  vector<int> arrayResult = reverseVector(arrayTest);
  for(int i = 0; i < arrayResult.size(); i++) cout << arrayResult[i];
}