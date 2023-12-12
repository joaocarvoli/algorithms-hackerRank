// Problem reference: https://www.geeksforgeeks.org/convert-an-array-to-reduced-form-using-hashing/
// Predefined complexities: sort = n*log(n)

#include <iostream>
#include <vector>
#include <algorithm>

using VectorPairsInt = std::vector<std::pair<int, int> >;
using PairInts = std::pair<int, int>;

// Comparator function used in sort - decision based on hashmap key
bool cmp(std::pair<int, int>& a, std::pair<int, int>& b){
    return a.first < b.first;
}

VectorPairsInt convertArrayHash(std::vector<int> array, int arraySize){
  VectorPairsInt vectorPairs;

  for(int i = 0; i < arraySize; i++){
    PairInts pair;
    pair.first = array[i];
    pair.second = i;
    vectorPairs.push_back(pair);
  }

  sort(vectorPairs.begin(), vectorPairs.end(), cmp);

  return vectorPairs;
   }


int main(){
  int itemsAmount = 0;
  std::vector<int> array;

  scanf("%d", &itemsAmount);

  for(int i = 0; i < itemsAmount; i++){
    int item = 0;
    scanf("%d", &item);
    array.push_back(item);
  }

  std::vector<std::pair<int, int> > map = convertArrayHash(array, itemsAmount);

  printf("\nResult:\n");
  for(auto p = map.begin(); p != map.end(); p++){
    printf("%d\n", p->second);
  }
}