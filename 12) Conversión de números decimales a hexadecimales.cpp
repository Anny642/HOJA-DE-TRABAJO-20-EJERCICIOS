#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    unsigned long long int decimal = 0;

    char cadena[63];

    printf("Ingresa un numero decimal:\n");
    scanf("%llu", &decimal);
   
    ltoa(decimal, cadena, 16);
    printf("El numero en hexadecimal es: %s\n", cadena);
    return 0;
}

