#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int cont, result, num;

printf("Digite o numero para exibir sua tabuada: ");
scanf("%d", &num);

for(cont = 1; cont <= 10; cont++){
	result = num * cont;
	printf("\n%d", result);
}	

printf("\nFim da Execucao!");
	return 0;
}
