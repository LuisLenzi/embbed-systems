#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int num_alunos, num_alunas;

  printf("Unis - Luis Lenzi");
  
  printf("\n\nDigite o numero de alunos: ");
  scanf("%d", &num_alunos);
  printf("Digite o numero de alunas: ");
  scanf("%d", &num_alunas);

  printf("\nO numero de alunos equivale a: %d", num_alunos);
  printf("\nO numero de alunas equivale a: %d", num_alunas);

  getch();
}