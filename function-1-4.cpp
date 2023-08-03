#include <iostream>

void print_scaled(int array[3][3], int scale) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      array[i][j] = array[i][j] * scale;
    }
  }
  for (int i = 0; i < 3; i++) {
    std::cout << array[0][i] << " ";
  }
  std::cout << std::endl;
  for (int i = 0; i < 3; i++) {
    std::cout << array[1][i] << " ";
  }
  std::cout << std::endl;
  for (int i = 0; i < 3; i++) {
    std::cout << array[2][i] << " ";
  }
  std::cout << std::endl;
}