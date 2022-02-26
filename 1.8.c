#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int total, susp, mort, conf;

  printf("Unis - Luis Lenzi");

  printf("\n\nPreencha com as seguintes informacoes sobre a Dengue em Portugal:");
  
  printf("\n\nCasos Suspeitos: ");
  scanf("%d", &susp);
  printf("Casos Confirmados: ");
  scanf("%d", &conf);
  printf("Quantidade de Mortos: ");
  scanf("%d", &mort);

  printf("\n\nInformacoes sobre a dengue em Portugal:");
  printf("\nCasos Suspeitos: %d", susp);
  printf("\nCasos Confirmados: %d", conf);
  printf("\nQuantidade de Mortos: %d", mort);
  printf("\n\nTotal de Casos: %d", total = susp + conf + mort);

  getch();
}