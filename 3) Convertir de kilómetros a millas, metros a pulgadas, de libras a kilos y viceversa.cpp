#include<stdio.h>
#include<conio.h>
#define km 0.6214
#define milla 1.6093  
#define pulgada 39.3701
#define metro 0.0254 
#define kilo 0.453592
#define libra 2.20462

float km_mi (float cantidad){
	return cantidad*km;
}

float mi_km (float cantidad){
	return cantidad*milla;	
}

float plg_mt (float cantidad){
	return cantidad*pulgada;
}

float mt_plg (float cantidad){
	return cantidad*metro;	
}
float kilo_lb (float cantidad){
	return cantidad*libra;
}

float lb_kilo (float cantidad){
	return cantidad*kilo;	

}
main(){
	int op;
	float cantidad;

	printf("CONVERTIR\n 1-.Kilometros a Millas\n 2.- Millas a Kilometros\n 3.- Metros a Pulgadas\n 4.- Pulgadas a Metros\n 5-.Libras a kilos\n 6.-Kilos a libras    			Respuesta:	");                                
	scanf("%d" , &op);
	printf("Introdusca la cantidad que desa convertir:	");

	scanf("%f", &cantidad);

	switch (op){
		case 1:
			printf ( "%.2f km equivale a %.2f millas ", cantidad, km_mi(cantidad ));
			break;
		case 2:
			printf("%.2f millas equivale a %.2f km", cantidad, mi_km(cantidad));
			break;
		
		case 3:
			printf ( "%.2f metros equivale a %.4f pulgadas ", cantidad, plg_mt(cantidad ));
			break;
			
		case 4:
			printf("%.4f pulgadas  equivale a %.2f metros ", cantidad, mt_plg(cantidad));
			break;
			
			case 5:
			printf ( "%.3f Kilos equivale a %.3f libras ", cantidad, kilo_lb (cantidad ));
			break;
		
		case 6:
			printf("%.3f libras  equivale a %.2f kilos ", cantidad, lb_kilo(cantidad));
			break;
			deafault:
				printf(" opcion intrucida incorrecta");			
	}
	getch();
	return 0;
}


