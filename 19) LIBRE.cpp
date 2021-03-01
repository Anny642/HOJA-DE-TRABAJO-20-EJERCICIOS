#include<conio.h>
#include<stdio.h>

main()
{
	char nombr1 [15], apellido[15];
	float edad;
	printf ("Ingrese tu primer nombre:	");
	scanf ("%s", &nombr1);
	printf ("Ingrese tu primer apellido:	");
	scanf ("%s", &apellido);
	printf ("\n Ingrese tu edad:	");
	scanf ("%f", &edad);
	printf ("HOLA  :%s	", nombr1);
	printf( "%s	", apellido);
	if (edad>18)
	{
		printf ("eres mayor de edad ");
	}
	if (edad<18)
	{
		printf (" eres menor de edad");
	}
	getch();
}
