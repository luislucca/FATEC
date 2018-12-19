#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float temp[10][3], soma, maiorTemp, menorTemp, maiorVariacao, variacao;
	int x, y, opcao, continua;
	
	maiorTemp = 0;
	menorTemp = 100000000;
	maiorVariacao = 0;
	continua = 0;
	
	for(x = 0; x < 10; x++){
		printf("Informe a temperatura minima, em graus Celsius, do dia '%d': ", x + 1);
		scanf("%f", &temp[x][0]);
		
		if (temp[x][0] < menorTemp) {
			menorTemp = temp[x][0];
		}
		
		printf("Informe a temperatura maxima, em graus Celsius, do dia '%d': ", x + 1);
		scanf("%f", &temp[x][1]);
		
		if (temp[x][1] > maiorTemp) {
			maiorTemp = temp[x][0];
		}
		
		soma = temp[x][0] + temp[x][1];
		temp[x][2] = soma / 2;
		
		variacao = temp[x][1] - temp[x][0];
		
		if (variacao > maiorVariacao) {
			maiorVariacao = variacao;
		}
	}	
	
	do{
		printf("\n\n\n\n\n\n\n*************** Escolha uma opcao a seguir ***************"
		"\n 1 - Temperatura minima de todos os dias"	
		"\n 2 - Temperatura maxima de todos os dias"
		"\n 3 - Maior variacao de temperatura de todos os dias"
		"\n 4 - Sair do progama"
		"\n\n Opcao: ");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1:
				printf("\nA temperatura minima de todos os dias foi de: %.2f grau(s)", menorTemp);
				break;
			
			case 2:
				printf("\nA temperatura maxima de todos os dias foi de: %.2f grau(s)", maiorTemp);
				break;
				
			case 3:
				printf("\nA maior variacao de temperatura de todos os dias foi de: %.2f grau(s)", maiorVariacao);
				break;
				
			case 4:
				continua = 1;
				printf("\n\n\n\n************* Fim da execucao *************");
				break;
		}
	} while (continua == 0);
	return 0;
}
