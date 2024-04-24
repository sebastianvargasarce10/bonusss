#include <stdio.h>
#include <math.h>

int main() {
  
  float radio, altura, area_base, area_lateral, area_total;

  printf("Ingrese el radio del cilindro: ");
  scanf("%f", &radio);

  printf("Ingrese la altura del cilindro: ");
  scanf("%f", &altura);

  area_base = M_PI * radio * radio;
  area_lateral = 2 * M_PI * radio * altura;
  area_total = 2 * area_base + area_lateral;


  printf("El área de la base del cilindro es: %.2f\n", area_base);
  printf("El área lateral del cilindro es: %.2f\n", area_lateral);
  printf("El área total del cilindro es: %.2f\n", area_total);

  return 0;
}
