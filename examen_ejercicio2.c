#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	printf("Hola ingresa un numero entero positivo:\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
	printf("%d\n",i);	
	}
	return 0;
}

