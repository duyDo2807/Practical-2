#include <cmath>
#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
  int decimal_number = 0;
  for (int i = 0; i < number_of_digits; i++) {
    decimal_number = decimal_number + (binary_digits[i] *
                                       std::pow(2, (number_of_digits - i - 1)));
  }
  return decimal_number;
}