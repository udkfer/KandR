// Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
#include <stdio.h>

int main()

{
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
    printf("%d\n", c != EOF);
  }
  printf("%d\n", c != EOF);
}
