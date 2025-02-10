#include <stdio.h>


void qsort(int v[], int left, int right);
void swap(int v[], int i, int j);

int main() {
  int v[] = {3, 5, 2, 1, 6, 8, 10};
  qsort(v, 0, 6);
  for (int i = 0; i < 7; i++)
    printf("%d, ", v[i]);
  printf("\n");
}

/* qsort: sort v[left]..v[right] into increasing order */
void qsort(int v[], int left, int right) {
  int i, last;
  if (left >= right)            /* do nothing if array contains fewer than two elements */
    return;
  swap(v, left, (left + right) / 2); /* move partition elem to v[0] */
  last = left;
  for (i = left + 1; i <= right; i++) /* partition */
    if (v[i] < v[left])
      swap(v, ++last, i);
  swap(v, left, last);         /* restore partition elem */
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j) {
  int temp;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}
