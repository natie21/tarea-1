#include <stdio.h>

void promedio(int n1,int n2,char nombre[15]){
int prom;
prom=n1*n2/n2;
printf("el promedio obtenido es=%d",prom);
printf("\ntus datos ingresados fueron:\n");
printf("%d\n",n1);
printf("%d\n",n2);
printf("%s\n",nombre);

}
int main(int argc, char *argv[]) {
	int n1,n2;
	char nombre[15];
	printf("ingrese un numero =\n");
	scanf("%d",&n1);
	printf("ingrese un numero =\n");
	scanf("%d",&n2);
	printf("ingrese su primer nombre =\n");
	scanf("%s",nombre);
	promedio(n1,n2,nombre);
	return 0;
}

