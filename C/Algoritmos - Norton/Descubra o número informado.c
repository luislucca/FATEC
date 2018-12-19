#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, num2;
	
	printf("Insira o numero a ser descoberto: ");
	scanf("%d", &num);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	do {
		printf("\nTente descobrir o numero informado: ");
		scanf("%d", &num2);		
	} while (num2 != num);
	
	printf("\nParabens, voce descobriu o numero!");

	return 0;
}
