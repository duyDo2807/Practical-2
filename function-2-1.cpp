#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
  int number = std::stoi(decimal_number);
  std::string baseNumber = "";
  if (number == 0) {
    baseNumber = "0";
  }
  while (number > 0) {
    char baseDigit;
    int remainder = number % 2;
    baseDigit = remainder + '0';
    baseNumber = baseDigit + baseNumber;
    number = number / 2;
  }
  std::cout << baseNumber << std::endl;
}