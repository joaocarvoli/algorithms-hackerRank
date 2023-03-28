// Problem reference: https://www.geeksforgeeks.org/c-program-check-given-string-palindrome/

#include <iostream>

std::string isPalindrome(std::string word){
  int wordLength = word.length();
  for(int i = 0; i <= wordLength/2; i++){
    if(word[i] != word[wordLength - i - 1]){
      return "No";
    }
  }
  return "Yes";
}

int main(){
  std::cout << isPalindrome("hello") << std::endl;
  std::cout << isPalindrome("aba") << std::endl;
  std::cout << isPalindrome("ababa") << std::endl;
}
