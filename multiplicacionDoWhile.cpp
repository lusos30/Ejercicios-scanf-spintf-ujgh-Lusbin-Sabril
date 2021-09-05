//Video 20. Estructuras repetitivas; Do-While
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
	int tabla;
	int i;
	do{
        printf("\nIngrese numero entre 1-10 para ejecutar tabla de multiplicar: ");
        scanf("%i",&tabla);

	  }while((tabla<1) ||(tabla>10));

	for(int i=1; i<=20; i++){

	printf("\n %i * %i = %i", tabla , i , tabla * i);
	}
	return 0;
}
