#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int lado, i, j;

  printf("Unis - Luis Lenzi");

  printf("\n\nDigite o lado de um quadrado em CM: ");
  scanf("%d", &lado);

  printf("\n\n");
  for (i = 0; i < lado; i++)
  {
    for (j = 0; j < lado; j++)
    {
      printf("#");
    }
    printf("\n");
  }
  printf("\nA area do quadrado equivale a: %d CM2", lado * lado);

  printf("\n\n");
  for (i = 0; i < lado; i++)
  {
    for (j = 0; j < lado; j++)
    {
      if (i == 0 || i == lado - 1)
        printf("#");
      else if (j == 0 || j == lado - 1)
        printf("#");
      else
        printf(" ");
    }
    printf("\n");
  }
  printf("\nO perimetro do quadrado equivale a: %d CM", lado * 4);

  getch();
}