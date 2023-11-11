#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a = 10, b = 50, temp;
  temp = a;
  a = b;
  b = temp;
  printf(" a:%d b:%d", a,b);
  
  return EXIT_SUCCESS;
}