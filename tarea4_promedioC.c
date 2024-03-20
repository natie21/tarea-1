#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,suma;
	float promedio;
	i=0;
	suma=0;
	promedio=0;
	do{
		i++;
		if(i%2==0){
			suma=suma+i;
			printf("\n%d",i);
		}
		
		promedio=suma/6;
	} while(i<=10);
	
	printf("\nsuma total=%d",suma);
	printf("\nel promedio es =%f",promedio);
	
	return 0;
}

