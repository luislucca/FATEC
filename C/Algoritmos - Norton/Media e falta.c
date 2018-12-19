#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float P1, P2, P3, F, percentualF, M;
		
	printf("Insira a quantidade de faltas (max 20): ");
	scanf("%f", &F);
			
	percentualF = (F/20) * 100;

		if (percentualF > 30){
		
			printf("Aluno reprovado pela porcentagem de faltas!");
		
		}
		else
		{
			printf("\nInsira a nota P1: ");
			scanf("%f", &P1);
			printf("Insira a nota P2: ");
			scanf("%f", &P2);
			
			M = (P1 + P2)/2;
	
		if (M >= 6){
			
			printf("Aluno aprovado!");
		
		}
		else
		{
			printf("\nInsira a nota P3: ");
			scanf("%f", &P3);
			
			M = (P1 + P2 + P3)/3;
			
			if (M >= 6){
				
				printf("\nAluno aprovado!");
		
			}
			else
			{
				
				printf("\nAluno reprovado!");
						
			}
			
		}
	
	
		}
	return 0;
}
