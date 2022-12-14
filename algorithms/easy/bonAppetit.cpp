// Problem reference: https://www.hackerrank.com/challenges/bon-appetit/problem
// Solution complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;


void bonAppetit(vector<int> bill, int declinedItemIndex, int valueCharged){
  int similarCost = 0;
  for (int i = 0; i < bill.size() ; i++) if (i != declinedItemIndex) similarCost += bill[i];
  if (valueCharged <= similarCost / 2) printf("Bon Appetit"); 
  else printf("%d", abs((similarCost / 2) - valueCharged));
} 


int main(){
  vector<int> bill = {72,53,60,66,90,62,12,31,36,94};
  bonAppetit(bill, 6, 288); // 6
}