#include <stdio.h>

double max_in_arr(double array[], int n);
double min_in_arr(double array[], int n);
double diff_in_array(double array[], int n);

int main() {
  double source[5] = {
    1.1,
    2.2,
    3.3,
    4.4,
    5.6
  };
  printf("Difference between the largest and smallest elements:  %.1f", diff_in_array(source, 5));

  return 0;
}

double max_in_arr(double array[], int n) {
  int i;
  double max = 0.0;
  for (i = 0; i < n; i++) {
    if (array[i] > max) max = array[i];
  }
  return max;
}

double min_in_arr(double array[], int n) {
  int i;
  double max = array[1];
  for (i = 0; i < n; i++) {
    if (array[i] < max) max = array[i];
  }
  return max;
}

double diff_in_array(double array[], int n){
	return max_in_arr(array,n)-min_in_arr(array,n);
}
