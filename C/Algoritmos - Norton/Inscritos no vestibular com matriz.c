#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float media = 0;
	int dados[10][3], x, y, ads = 0, gecom = 0, eventos = 0, rh = 0;
	
	for(x = 0; x < 10; x++){
		printf("\nInsira o CPF do vestibulando: ");
		scanf("%d", &dados[x][0]);
		
		for(y = 0; y < 10; y++){
			if(x != y){
				while (dados[x][0] == dados[y][0] || dados[x][0] < 10000000000){
					printf("\nCPF ja cadastrado, registro nao inserido!"
					"\n\nPor favor, insira um CPF valido: ");
					scanf("%d", &dados[x][0]);
				}
			}
		}
		
		printf("Insira a idade do vestibulando: ");
		scanf("%d", &dados[x][1]);
		
		media = media + dados[x][1];
		
		printf("Insira o curso escolhido pelo vestibulando.\n(1-ADS/2-GECOM/3-Eventos/4-RH): ");
		scanf("%d", &dados[x][2]);
		
		switch (dados[x][2]){
			case 1:
				ads++;
				break;
			
			case 2:
				gecom++;
				break;
				
			case 3:
				eventos++;
				break;
			
			case 4:
				rh++;
				break;
		}
	}
	
	media = media / 10;
	
	printf("A quatidade de inscritos para ADS, GECOM, Eventos e RH sao, respectivamente: "
	"\n%d, %d, %d e %d !", ads, gecom, eventos, rh);
	printf("\nE a media de idade dos inscritos e de, aproximadamente %.1f", media);
	
	return 0;
}
