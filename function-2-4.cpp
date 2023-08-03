#include <iostream>

int array_min(int integer[], int length) {
  int min = integer[0];
  for (int i = 1; i < length; i++) {
    if (integer[i] < min) {
      min = integer[i];
    }
  }
  return min;
}

int array_max(int integer[], int length) {
  int max = integer[0];
  for (int i = 1; i < length; i++) {
    if (integer[i] > max) {
      max = integer[i];
    }
  }
  return max;
}

int sum_min_max(int integer[], int length) {
  if (length <= 0) {
    return -1;
  }
  int min = array_min(integer, length);
  int max = array_max(integer, length);
  int sum = min + max;
  return sum;
}