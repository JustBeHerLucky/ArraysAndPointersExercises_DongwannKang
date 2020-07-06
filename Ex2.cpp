#include <stdio.h>

int max_in_arr(int array[], int n);

int main() {
  int source[5] = {
    1,
    2,
    3,
    4,
    5
  };
  printf("Max in array: %d", max_in_arr(source, 5));

  return 0;
}

int max_in_arr(int array[], int n) {
  int i, max = 0;
  for (i = 0; i < n; i++) {
    if (array[i] > max) max = array[i];
  }
  return max;
}
