#include <stdio.h>

void copy_arr(double * pt1, double * ps, int n);
void copy_ptr(double * pt2, double * ps, int n);
void copy_ptrs(double * pt3, double * ps_start, double * ps_end);
void show_ar(double * pt, int n);

int main() {
  double source[5] = {
    1.1,
    2.2,
    3.3,
    4.4,
    5.5
  };
  double target1[5];
  double target2[5];
  double target3[5];
  copy_arr(target1, source, 5);
  show_ar(target1, 5);
  copy_ptr(target2, source, 5);
  show_ar(target2, 5);
  copy_ptrs(target3, source, source + 5);
  show_ar(target3, 5);

  return 0;
}
void copy_arr(double * pt1, double * ps, int n) {
  int j;
  for (j = 0; j < n; j++)
    pt1[j] = ps[j];
  return;
}
void copy_ptr(double * pt2, double * ps, int n) {
  int j;
  for (j = 0; j < n; j++)
    *
    (pt2 + j) = * (ps + j);
  return;
}
void copy_ptrs(double * pt3, double * ps_start, double * ps_end) {
  while (ps_start < ps_end)
    *
    (pt3++) = * (ps_start++);
  return;
}
void show_ar(double * pt, int n) {
  int j;
  for (j = 0; j < n; j++)
    printf(" %.1f", *(pt + j));
  printf("\n");
}
