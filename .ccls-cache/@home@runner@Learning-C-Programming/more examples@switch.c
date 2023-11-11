#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int marks;
  printf("Enter your marks between 0 to 100 \n");
  scanf("%d", &marks);
   switch(marks/10) {
     case 10:
     case 9: /* Marks between 90 to 100 */
     printf("Your Grade : A\n");
     break;
     case 8:
     case 7: /* Marks between 70 to 89 */
     printf("Your Grade : B\n");
     break;
     case 6: /* Marks between  60 
     to  69 */
       printf("Your Grade : C\n");
     break;
     case 5:
     case 4: /* Marks between 59 to 40 */
     printf("Your Grade : D\n");
     break;
     default: /* Marks Less than 40 */
     printf("You Failed\n");
   }
  return EXIT_SUCCESS;
}
