#include <stdio.h>

int main(int argc, char *argv[]) {
/*	Vamos a simular hacer un sistema de un cajero automático, el cual tendrá un */
/*		menú con 3 opciones, la primera es la opción de retirar dinero, la segunda */
/*		opción es abonar dinero, la 3 es salir del programa, mi saldo inicial será de */
/*		$3000 mil pesos, quiero que mi menú se repita hasta que yo seleccione la */
/*		opción 3.  */
/*		Además de que en cada opción me debe de decir al final el saldo actual con el */
/*		que cuento en mi cuenta bancaria.*/
	int opcion,saldoin,retiro,abono,saldores,saldoab;
	saldoin=3000;
	saldores=0;
	saldoab=0;
	do{
		printf("\n******************MENU PRINCIPAL*******************\n");
		printf("1. Retiro de efectivo\n");
		printf("2. Abono a tu cuenta\n");
		printf("3. salir del programa\n");
		printf("***************************************************\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			printf("hola,ingresa la cantidad que deseas retirar\n");
			scanf("%d",&retiro);
			if(retiro<=saldoin){
			printf("tu retiro fue exitoso\n");
			saldores=saldoin-retiro;
			printf("tu saldo restante es de =%d",saldores);
			}
			else if(retiro>saldoin){
				printf("Saldo insuficiente");
			}
			break;
		case 2:
			saldores=0;
			printf("tu saldo ahora es de =%d\n",saldoin);
			printf("ingresa la cantidad que desees abonar\n");
			scanf("%d",&abono);
			if(abono>0){
				saldoin=saldoin+abono;	
				printf("muy bien,ahora tu saldo es de =%d",saldoin);	
			}
			
			break;
		case 3:
			printf("Estas saliendo del programa...");
			break;
		
		default:
			printf("lo siento esa opcion no esta disponible");
		};
	} while(opcion !=3);
	return 0;
}

