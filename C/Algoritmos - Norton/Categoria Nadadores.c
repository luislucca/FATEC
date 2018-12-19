#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int Idade;
	
	printf("Indique idade do nadador: ");
	scanf("%d", &Idade);
	
	if (Idade >= 5 && Idade <= 7){
		
		printf("Nadador da categoria Infantil A.");
		
	} 
	else
	{
	
		if (Idade >= 8 && Idade <= 11){
		
			printf("Nadador da categoria Infantil B.");
		
		}
		else
		{
			if (Idade >= 12 && Idade <= 13){
			
				printf("Nadador da categoria Juvenil A.");
			
			}
			else
			{
				if (Idade >= 14 && Idade <= 17){
								
					printf("Nadador da categoria Juvenil B.");
				
				}
				else
				{
					if (Idade >= 18){
						
						
						printf("Nadador categia Adulto.");
						
					}
					else
					{
						
						printf("Nadadores fora de categoria.");
						
					}
				}
			}
		}
	}
	return 0;
}
