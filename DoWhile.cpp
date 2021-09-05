//do while
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
	int i;
	i=1;
	do {
	printf("Ingresa un numero entre 1-10: ");
    scanf("%d",&i);

	}while((i<1) || (i>10));

	return 0;
}
