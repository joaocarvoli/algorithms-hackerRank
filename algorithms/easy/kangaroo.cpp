// Problem reference: https://www.hackerrank.com/challenges/kangaroo/problem
// Predefined complexities: size = O(1), vector.begin = O(1), vector.erase(0) = O(1)
// Code complexity: ...

#include <iostream>
#include <bits/stdc++.h>

std::string kangaroo(int x1, int v1, int x2, int v2){
  float equation = (x1 - x2)/(v2 - v1);
  if(equation > 0 and (equation - int(equation)) == 0) return "YES";
  return "NO";
}

int main(){
  std::cout << kangaroo(2,1,1,2) << std::endl; // Expected value: YES
  std::cout << kangaroo(0,2,5,3) << std::endl; // Expected value: NO
  std::cout << kangaroo(0,3,4,2) << std::endl; // Expected value: YES
}