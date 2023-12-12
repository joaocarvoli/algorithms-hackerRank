// Problem reference: https://www.geeksforgeeks.org/counting-frequencies-of-array-elements/

#include <iostream>
#include <unordered_map>
#include <vector>

std::unordered_map<int, int> countFrequences(std::vector<int> vector, int size){
  std::unordered_map<int, int> umap;
  
  for(int i = 0; i < size; i++){
    umap[vector[i]]++;
  }

  return umap;
}

int main(){
  int n = 0;
  std::vector<int> array;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    int input = 0;
    scanf("%d", &input);
    array.push_back(input);
  }

  std::unordered_map<int, int> umap = countFrequences(array, n);

  for(auto p = umap.begin(); p != umap.end(); p++){
    printf("{%d:%d}\n", p->first, p->second);
  }
}
