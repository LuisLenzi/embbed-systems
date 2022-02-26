#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int num, i;

  printf("Unis - Luis Lenzi");

  printf("\n\nDigite um numero inteiro: ");
  scanf("%d", &num);

  printf("\nTabuada de %d", num);

  for (i = 1; i <= 10; i++)
  {
    printf("\n%d x %d = %d", num, i, num * i);
  }

  getch();
}