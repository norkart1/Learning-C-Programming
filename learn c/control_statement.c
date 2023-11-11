#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num;
  printf(" Enter a Number : ");
  scanf("%d", &num);
  if (num<0) {
    printf(" Number is negative ");
  } else {
    printf(" Numebr is positive ");
  }
  return EXIT_SUCCESS;
}