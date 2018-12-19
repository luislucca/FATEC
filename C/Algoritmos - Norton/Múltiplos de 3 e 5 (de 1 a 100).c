#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int comeca, num;

printf("Digite 1 para comecar: ");
scanf("%d", &comeca);

for (num = 1; num <= 100; num++){
	printf("\n%d", num);
	
	int verificacao3 = num % 3;
	int verificacao5 = num % 5;
	
	if(verificacao3 == 0 && verificacao5 == 0){
		printf("   <-- Numero multiplo de 3 e de 5\n");
	}
}
	return 0;
}
