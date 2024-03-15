#include <stdio.h>

int main(int argc, char *argv[]) {
	int num,suma;
	num=1;
	while(num<=5){
		printf("%d\n",num);
		num++;
	}
	
	printf ("los numeros pares son los siguientes \n");
	num=1;
  while(num<=5){
	if(num%2==0){
		
		printf("%d\n",num);
	}
	num++;
		}
  suma=num++;
	printf("la suma de los pares es=%d\n",suma);
	
	return 0;
}


