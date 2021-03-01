#include<iostream>
using namespace std;

int main(){
	int saldo_inicial =1000;
	int saldo, reintegro,opcion,agregar;
	
	cout<<"\tBIENVENIDO A SU CAJERO VIRTUAL		";
	cout<<"\tEscoja una opcion";
	cout<<"\n1. Ingreso en cuenta";
	cout<<"\n2. Reintegro";
	cout<<"\n3. Ver saldo de cuenta";
	cout<<"\n0. Salir";
	cin>>opcion 	;
	
	if (opcion==1){
		cout<<"\n Ingrese la cantidad a depositar:		Q";
		cin>> agregar;
		saldo=saldo_inicial + agregar;
		cout<<"\nCantidad disponible en cuenta:		Q"<<saldo;

	}
	else if (opcion==2){
		cout<<"\nCuenta cantidad desea retirar:		Q.";
		cin>>reintegro;
		if (reintegro>1000){
			cout<<"\nLa cantidad digitada es mayor a 1000, digite de nuevo la cantidad a retirar:		";
			cin>>reintegro;
		}
		saldo= saldo_inicial-reintegro;
		cout<<"\nCantidad disponible en cuenta:		 Q"<<saldo;
		
		}
	else if (opcion==3){
		cout<<"\nLa cantidad disponible en cuenta es de:		Q"<<saldo_inicial;
	}
	else if (opcion==0){
		cout<<"Gracias por utilizar nuestr cajero automatico";	
	}
	else{
		cout<<"Se equivoco de opcion de menu";
	}
	cin.get();
}
