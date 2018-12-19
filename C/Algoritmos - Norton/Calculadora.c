#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float Indice;
	
	printf("Indique o indice de poluicao: ");
	scanf("%f", &Indice);
	
	if (Indice >= 0.3 && Indice < 0.4){
		
		printf("As industrias do primeiro grupo devem parar suas atividades!");
		
	} 
	else
	{
	
		if (Indice >= 0.4 && Indice < 0.5){
		
			printf("As industrias do primeiro e segundo grupos devem parar suas atividades!");
		
		}
		else
		{
			if (Indice >= 0.5){
			
				printf("As industrias de todos os grupos devem parar suas atividades!");
			
			}
			else
			{
				printf("O indice de poluicao esta aceitavel.");
			}
		}
	}
	
	
	return 0;
}
