#include <stdio.h>
void secuencia(int fin ){
int i,suma;
suma=0;
for(i=1;i<=fin;i++){
printf(" %d ",i);
if (i % 2 !=0){
suma=suma+i; 	
}

}
printf ("\nla suma de los impares es =%d",suma);
}
int main(int argc, char *argv[]) {
	int fin;
	printf("ingresa un numero que sera el fin de tu secuencia:\n");
	scanf("%d",&fin);
	secuencia(fin);
	return 0;
}

