#include <iostream>

extern int is_identity(int array[10][10]);

int main() {
  int array[10][10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (i == j) {
        array[i][j] = 1;
      } else {
        array[i][j] = 0;
      }
    }
  }
  std::cout << is_identity(array) << std::endl;
  return 0;
}