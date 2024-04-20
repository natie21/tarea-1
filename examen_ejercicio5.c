#include <stdio.h>

int main(int argc, char *argv[]) {
	int arreglo[5]={23,4,1,44,55 };
	int suma=0;
	int aux;
	for(int i=0;i<5;i++){
		//printf("%d ",arreglo[i]);
		suma=suma+arreglo[i];
	}
	//printf("%d ",suma);
	if(suma % 2 ==0){
		printf("imprimiendo arreglo de forma ascendente:\n");
		for(int n =0;n<5;n++){
			for(int m=0;m<5;m++){
				if(arreglo[m] > arreglo[m+1]){
				aux=arreglo[m];
				arreglo[m]= arreglo [m+1];
				arreglo [m+1]=aux;
				}
			}
		}
		for(int n =0;n<5;n++){
			printf("%d ",arreglo[n]);
		}
	}
	else if(suma % 2 ==1){
		printf("imprimiendo arreglo de forma descendente:\n");
		for(int n =0;n<5;n++){
			for(int m=0;m<5;m++){
				if(arreglo[m] < arreglo[m+1]){
					aux=arreglo[m];
					arreglo[m]= arreglo [m+1];
					arreglo [m+1]=aux;
				}
			}
		}
		for(int n =0;n<5;n++){
			printf("%d ",arreglo[n]);
		}
	}
	return 0;
}

