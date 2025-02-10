#include <stdio.h>


int main() {
  int x = 1, y = 2, z[10];
  int *ip;                      /* ip is a pointer to int */
  printf("int *ip: %p\n", &ip);

  ip = &x;                      /* ip now points to x */
  printf("ip = &x: %d\n", ip);
  y = *ip;                      /* y is now 1 */
  printf("y = *ip: %d\n", y);
  *ip = 0;                      /* x is now 0 */
  printf("*ip = 0: %d\n", x);
  ip = &z[0];                    /* ip now points to z[0] */
  printf("ip = &z[0]: %d\n", ip);
}
