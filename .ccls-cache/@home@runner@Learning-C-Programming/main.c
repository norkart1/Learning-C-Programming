#include <stdio.h>
#include <stdlib.h> 

int main(void) {


  //SUM 
  /*
  int number1, number2, sum;
  printf("Enter 2 numbers ");
  scanf("%d %d", &number1, &number2);
  sum = number1 + number2;
  printf("Result is : %d " , sum);
  */
  // DIVISION FLOAT
  /*
    float num1, num2, num3, average;
  printf("Enter 3 numbers ");
  scanf(" %f %f %f", &num1, &num2, &num3);
  average = (num1,num2,num3)/3;
  printf("Result is : %f", average);*/
//SWAPPING
/*
  int a = 20, b = 50, temp;

  temp = a;
  a = b;
  b = temp;

  printf("a:%d b:%d", a,b);
  */


  // Control Statement IF ELSE

  /*
   int num;
  printf("Enter a Number ");
  scanf("%d", &num);
  if(num<0) {
    printf("Number is negative ");
  } else {
    printf("Number is postive ");
  }*/
/*
  int num1,num2;
  printf("Enter 2 numbers");
  scanf("%d %d", &num1,&num2);
  if(num1>num2) {
    printf(" Greatest number is %d", num1);
  } else {
    printf(" Greatest numbers is %d", num2);
  } */
/*
  int num1,num2, choice, result;
  printf("Enter 2 numbers ");
  scanf(" %d %d", &num1, &num2 );
  printf(" 1 for addition\n2 for substraction \n3 for multiplication \n4 for division \n Enter your choice ");
  scanf("%d", &choice);
  if(choice==1) {
    result = num1 + num2;
    printf("Result is %d", result);
  } else if (choice==2) {
    result = num1 - num2;
    printf("Result is %d", result);
  }  else if (choice==3) {
    result = num1 * num2;
    printf("Result is %d", result);
  }  else if (choice==4) {
    result = num1 / num2;
    printf("Result is %d", result);
  } else {
    printf("Fool!!!");
  }*/

  // SWITCH STATEMENT

  int choice;
  printf("1 for Biryani \n2 for porota \n3 for Fride Rice \n4 for Mandhi \nEnter your choice");
  scanf("%d", &choice);
  switch(choice) {
    case 1:
    printf("You have selected Biryani");
    break;
    case 2:
    printf("You have selected porota");
    break;
      case 3:
    printf("You have selected Fride Rice");
    break;
      case 4:
    printf("You have selected Mandhi");
    break;
      default:
    printf("Fool!!!");
    
  }
  
  return EXIT_SUCCESS;
}