#include <stdio.h>

int main()
{
  printf("Hola mundo\n");

  int numero = 777;
  int *pNumero = &numero;
  printf("%p\n", *pNumero); // Direccion de memoria almacenada por el puntero 
  printf("%p\n", &numero); // Direccion de memoria del numero
  printf("%p\n", &pNumero); // Direccion de memoria del puntero
  printf("%d", sizeof(numero)); // Tamaño de memoria utilizado por el numero
  return 0;
}