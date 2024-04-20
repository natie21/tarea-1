#include <stdio.h>
void esPar(int num){
	if(num % 2 ==0){
	printf("¡Numero par ingresado!\n");	
	}
}
int main(int argc, char *argv[]) {
	int numm;
/*	printf("Ingresa un numero entero positivo:\n");*/
/*	sacnf("%d",&numm);*/
/*	esPar(numm);*/
	do{
		printf("\nIngresa un numero entero positivo:\n");
		scanf("%d",&numm);
		esPar(numm);
		if(numm % 2==1){
		printf("Numero impar ingresado.Intentalo de nuevo\n");	
		}
		
	} while(numm % 2==1);
	return 0;
}

