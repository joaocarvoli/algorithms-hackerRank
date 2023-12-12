// Problem reference: https://practice.geeksforgeeks.org/problems/reverse-squared-sum/0
#include <iostream>
#include <math.h>

using namespace std;

int reverseSquaredSum(int array[], int amount){
  int sumArray = array[amount - 1]*array[amount - 1];
  int op = true;

  for(int i = amount - 2; i >= 0; i--){
    if(op == true){
      sumArray -= array[i]*array[i];
      op = false;
    } else {
      sumArray += array[i]*array[i];
      op = true;
    }
  }
  return sumArray;
}

int main(){
  int t;
  int results[t];
  cin >> t;

  for(int j = 0; j < t; j++){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
  
    results[j] = reverseSquaredSum(arr, n);
  }
  
  for(int i = 0; i < t; i++){
    printf("%d\n", results[i]);
  }

  return 0;