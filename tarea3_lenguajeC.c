#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,tabla;
	printf("hola!! ingresa la tabla que deseeas obtener \n");
	scanf("%d",&tabla);
	for(i=1;i<=10;i++){
		printf("\n %d x %d = %d",tabla,i,tabla*i);
	}
	return 0;
}

