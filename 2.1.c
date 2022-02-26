#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int A, B, C;

  printf("Unis - Luis Lenzi");

  printf("\n\nDigite a quantidade de chuteiras da marca A: ");
  scanf("%d", &A);
  printf("Digite a quantidade de chuteiras da marca B: ");
  scanf("%d", &B);
  printf("Digite a quantidade de chuteiras da marca C: ");
  scanf("%d", &C);

  printf("\nExistem %d chuteiras da marca A", A);
  printf("\nExistem %d chuteiras da marca B", B);
  printf("\nExistem %d chuteiras da marca C", C);

  printf("\n\nQuantidade de chuteiras em estoque");
  printf("\nA: %d, B: %d, C: %d", A, B, C);

  getch();
}