#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int num;

  printf("Unis - Luis Lenzi");

  printf("\n\nEscreva um numero na base decimal: ");
  scanf("%d", &num);

  printf("\nO numero escrito na base octal equivale a: %o", num);
  printf("\nO numero escrito na base hexadecimal equivale a: %x", num);

  getch();
}