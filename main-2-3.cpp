#include <iostream>

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
  int array[] = {1, 2, 3, 2, 1};
  int length = 5;
  int result = sum_if_palindrome(array, length);
  std::cout << result << std::endl;
  return 0;
}