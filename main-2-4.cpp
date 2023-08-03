#include <iostream>

extern int array_min(int integer[], int length);
extern int array_max(int integer[], int length);
extern int sum_min_max(int integer[], int length);

int main() {
  int integer[] = {2, 3, 4, 9, -1, 6};
  int length = 6;
  int result = sum_min_max(integer, length);
  std::cout << result << std::endl;
  return 0;
}