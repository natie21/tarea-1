#include <stdio.h>

int main(int argc, char *argv[]) {
	int num1,num2,num3;
	printf ("holaa ,ingresa tres numeros enteros \n");
	scanf ("%d\n",&num1);
	scanf ("%d\n",&num2);
	scanf ("%d",&num3);
	
	printf ("Veamos que numero es mayor \n");
	if (num1>num2 && num1>num3){
		printf ("el numero 1 es mayor %d",num1);
	}
	else if (num2>num1 && num2>num3){
		printf("el numero 2 es mayor %d",num2);
	}
	else if (num3>num1 && num3 >num2){
		printf ("el numero 3 es mayor %d",num3);
	}
	else if (num3==0 && num2==0 && num1==0){
		printf ("los numeros ingresados sn iguales y nulos ");
	}
	else {
		printf ("los numeros ingresados son iguales");
	}
	return 0;
}
