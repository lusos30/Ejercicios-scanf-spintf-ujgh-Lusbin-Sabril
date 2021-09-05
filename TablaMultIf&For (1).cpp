//multiplicacion
#include<stdio.h>
#include<conio.h>

using namespace std;
int main(){

	int tabla;
	int i;
	printf("Ingrese un numero entre 1-10:");
	scanf("%i",&tabla);

	if((tabla>1) && (tabla<=10)){
		printf("La tabla de multiplicar de %i es: ", tabla);
		for(i=1; i<=10; i++){
			printf("\n %i * %i = %i", tabla , i , tabla * i);
		}

	}else{
		printf("Ingrese un numero entre 1-10");
	}

	return 0;
}
