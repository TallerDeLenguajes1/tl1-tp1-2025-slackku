#include <stdio.h>

int cuadrado(int numero);
void cuadradoVoid(int *numero);
void invertir(int *a, int *b);
void orden(int *a, int *b);
void mostrarDirMem(int *num);
void mostrarInfo(int *num);

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
    printf("El cuadrado del numero ingresado es: %d\n", numero2);

    int numero3, numero4;

    printf("Ingrese un numero:");
    scanf("%d", &numero3);
    mostrarDirMem(&numero3);
    printf("Ingrese un numero:");
    scanf("%d", &numero4);
    mostrarDirMem(&numero4);

    invertir(&numero3, &numero4);
    mostrarInfo(&numero3);
    mostrarInfo(&numero4);

    printf("------- Orden de dos numeros -------\n");
    printf("(basado en los dos ultimos numeros ingresado)\n");
    orden(&numero3, &numero4);
    printf("#### Menor numero ####\n");
    mostrarInfo(&numero3);
    printf("#### Mayor numero ####\n");
    mostrarInfo(&numero4);

    return 0;
}

void mostrarDirMem(int *num)
{
    printf("Direccion de la variable: %p\n", num);
}

void mostrarInfo(int *num)
{
    printf("En la variable esta el valor: %d\n", *num);
    mostrarDirMem(num);
}

int cuadrado(int numero)
{
    printf("Ingresando a la funcion...\n");
    mostrarDirMem(&numero);
    return numero * numero;
}

void cuadradoVoid(int *numero)
{
    printf("Ingresando a la funcion...\n");
    mostrarDirMem(numero);
    *numero *= *numero;
}

void invertir(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    if (*a > *b)
    {
        invertir(a, b);
    }
}