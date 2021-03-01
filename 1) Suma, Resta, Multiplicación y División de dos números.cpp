#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std; //


main()

{

 char operacion; 

 int valor1,valor2; 

 float resultado; 

 char respuesta='S'; 


 do // 

  {

   system("cls");

	 cout << "\n ----POCIONES----  ";

	 cout << "\n ----1. Suma (+)";

	 cout << "\n ----2. Resta (-)";

	 cout << "\n ----3. Multiplicacion ()  ";

	 cout << "\n ----4. Division (/) (Cociente) ";

	 cout << "\n ----5. Division (%) (Residuo) ";

	 cout << "\n -------Seleccione la  Operacion: 		 ";

	 cin >> operacion;

	 valor1=0;

	 valor2=0;

	 cout << "\n Ingrese Valor 1:	 ";

	 cin >> valor1;

	 cout << "\n Ingrese Valor 2:  	 ";

	 cin >> valor2;

	 switch (operacion)

	 {

	  case '1':

	   resultado = valor1+valor2;

	   cout << "\n La suma es:		 " << resultado << endl;

	  break;

	  case '2':

	   resultado = valor1-valor2;

	   cout << "\nLa resta es: 		"<< resultado << endl;

	  break;

	  case '3':

	   resultado = valor1*valor2;

	   cout << "\nLa Multiplicacion es:		 "<< resultado << endl;

	  break;

	  case '4':

	   resultado = valor1/valor2;

	   cout << "\nLa Division es:		 "<< resultado << endl;

	  break;

	  case '5':

	   resultado = valor1%valor2;

	   cout << "\nLa Division es:		 "<< resultado << endl;

	  break;

	  default:

	   cout << "\nOperacion Invalida " << endl;

	  }

	cout << "\nDesea otra operacion s/n?" << endl;

	cin >> respuesta;

	} while(respuesta=='S' || respuesta=='s'); 

	cout << "\n * Presione cualquier tecla para finalizar *" << endl;

	getch();

  return 0;

}
