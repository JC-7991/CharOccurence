#include <iostream>
#include <string>
 
int main(){

  std::string s;
  char ch;

  std::cout << "Enter a string: ";
  getline(std::cin, s);
  std::cin.clear();

  std::cout << "Enter a char: ";
  std::cin >> ch;
 
  int count = 0;
  for(int i = 0; (i = s.find(ch, i)) != std::string::npos; i++){
    count++;
  }
 
  std::cout << "Character '" << ch << "' occurs " << count << " times.\n";
 
  return 0;

}