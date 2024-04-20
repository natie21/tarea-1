#include <stdio.h>

int main(int argc, char *argv[]) {
	float calificacion;
	printf("ingresa la calificacion de 0 a 100\n");
	scanf("%f",&calificacion);
	if(calificacion >90){
		printf("A");
	}
	else if(calificacion>80 && calificacion<90){
		printf("B");
	}
	else if(calificacion>70 && calificacion<80){
		printf("C");
	}
	if(calificacion >60 && calificacion <70){
		printf("D");
	}
	else if(calificacion<60){
		printf("F");
	}
	return 0;
}

