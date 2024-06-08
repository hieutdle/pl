#include <stdio.h>

int main() {
  int c;

  c = getchar();

  while ((c = getchar()) != EOF)
    putchar(c);

  printf("The value of EOF is: %d\n", EOF);

  return 0;
}