#include <stdio.h>
#include <stdlib.h> 

int main(void) {
 /* int a;
  printf("Enter a value: ");
  scanf("%d", &a);
  printf("You have entered %d\n", a);*/

  //SUM 
  /*
  int number1, number2, sum;
  printf("Enter 2 numbers ");
  scanf("%d %d", &number1, &number2);
  sum = number1 + number2;
  printf("Result is : %d " , sum);
  */
  // DIVISION FLOAT
    float num1, num2, num3, average;
  printf("Enter 3 numbers ");
  scanf(" %f %f %f", &num1, &num2, &num3);
  average = (num1,num2,num3)/3;
  printf("Result is : %f", average);
  return EXIT_SUCCESS;
}