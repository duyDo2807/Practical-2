#include <iostream>

bool is_palindrome(int integers[], int length) {
  if (length <= 0) {
    return false;
  }

  int left = 0;
  int right = length - 1;

  while (left < right) {
    if (integers[left] != integers[right]) {
      return false;
    }
    left++;
    right--;
  }

  return true;
}

int sum_array_elements(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum = sum + integers[i];
  }

  return sum;
}

int sum_if_palindrome(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }

  if (!is_palindrome(integers, length)) {
    return -2;
  }

  return sum_array_elements(integers, length);
}
