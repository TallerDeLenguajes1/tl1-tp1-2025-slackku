#include <stdio.h>

int cuadrado(int numero);
void cuadradoVoid(int *numero);

int main()
{
    int numero1;
    int numero2;
    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("Direccion Memoria numero ingresado: %p\n", &numero1);
    numero1 = cuadrado(numero1);
    printf("El cuadrado del numero ingresado es: %d\n", numero1);

    printf("Ingrese otro numero: ");
    scanf("%d", &numero2);
    printf("Direccion Memoria numero ingresado: %p\n", &numero2);
    cuadradoVoid(&numero2);
    printf("El cuadrado del numero ingresado es: %d", numero2);

    return 0;
}

int cuadrado(int numero)
{
    printf("Ingresando a la funcion... Usando numero ubicado en la de direccion: %p\n", &numero);
    return numero * numero;
}

void cuadradoVoid(int *numero)
{
    printf("Ingresando a la funcion... Usando numero ubicado en la de direccion: %p\n", numero);
    *numero *= *numero;
}