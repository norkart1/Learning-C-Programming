#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int choice;
  printf("1 for Biryani \n2 for porota \n3 for fride rice \n4 for mandhi \nEnter your choice : ");
  scanf("%d", &choice);
  switch(choice) {
    case 1: printf("You selected Biriyani 🍛"); break;
    case 2: printf("You selected porota 🥟"); break;
    case 3: printf("You selected fride rice 🍚"); break;
    case 4: printf("You selected nandhi 🍲"); break;
    default: printf("This dish is not on the menu 🔴");
  }
  return EXIT_SUCCESS;
}
