#include <stdio.h>

int main(int argc, char *argv[]) {
	int op;
	printf("Ingresa un numero del 1 al 7 :\n");
	scanf("%d",&op);
	switch(op){
case 1:
		printf("LUNES");
		break;
case 2:
	printf("MARTES");
	break;
case 3:
	printf("MIERCOLES");
	break;
case 4:
	printf("JUEVES");
	break;
case 5:
	printf("VIERNES");
	break;
case 6:
	printf("SABADO");
	break;
case 7:
	printf("DOMINGO");
	break;
default:
	printf("Numero de dia invalido");
	}
	return 0;
}

