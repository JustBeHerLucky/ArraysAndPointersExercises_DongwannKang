#include <stdio.h>

void reverse(double array[], int n);
void show_ar(double * pt, int n);

int main() {
  double source[5] = {
    1.1,
    2.2,
    3.3,
    4.4,
    5.5
  };
  reverse(source, 5);
  show_ar(source, 5);

  return 0;
}

void reverse(double array[], int n) {
  int start = 0;
  int end = n - 1;
  while (start < end) {
    double temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    start++;
    end--;
  }
}

void show_ar(double * pt, int n) {
  int j;
  for (j = 0; j < n; j++)
    printf(" %.1f", *(pt + j));
  printf("\n");
}
