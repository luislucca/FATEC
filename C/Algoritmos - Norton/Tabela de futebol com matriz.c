#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tabela[10][4], x, pontuacao1, pontuacao2, pontuacao3, primeiro, segundo, terceiro;
	
	printf("\nInsira o total de vitorias do time '%d': ", x + 1);
		scanf("%d", &tabela[x][0]);
		
		tabela[x][3] = tabela[x][0] * 3;
		
		printf("\nInsira o total de empates do time '%d': ", x + 1);
		scanf("%d", &tabela[x][1]);
		
		tabela[x][3] = tabela[x][3] + tabela[x][1];
		
		printf("\nInsira o total de derrotas do time '%d': ", x + 1);
		scanf("%d", &tabela[x][2]);
		
	pontuacao1 = tabela[0][3];
	pontuacao2 = tabela[0][3];
	pontuacao3 = tabela[0][3];
	
	for(x = 1; x < 10; x++){
		printf("\nInsira o total de vitorias do time '%d': ", x + 1);
		scanf("%d", &tabela[x][0]);
		
		tabela[x][3] = tabela[x][0] * 3;
		
		printf("\nInsira o total de empates do time '%d': ", x + 1);
		scanf("%d", &tabela[x][1]);
		
		tabela[x][3] = tabela[x][3] + tabela[x][1];
		
		printf("\nInsira o total de derrotas do time '%d': ", x + 1);
		scanf("%d", &tabela[x][2]);
		
		if(tabela[x][3] > pontuacao3 && tabela[x][3] < pontuacao2){
			pontuacao3 = tabela[x][3];
			printf("\n%d pont 3", pontuacao3);
			terceiro = x + 1;
			printf("\n%d terc", terceiro);
		}
		
		if(tabela[x][3] >= pontuacao2 && tabela[x][3] < pontuacao1){
			pontuacao2 = tabela[x][3];
			printf("\n%d pont 2", pontuacao2);
			segundo = x + 1;
			printf("\n%d seg", segundo);
		}
		
		if(tabela[x][3] >= pontuacao1){
			pontuacao1 = tabela[x][3];
			printf("\n%d pont1", pontuacao1);
			primeiro = x + 1;
			printf("\n%d pri", primeiro);
		}
	}
	
	printf("\nO primeiro colocado e o time '%d'."
	"\nO segundo colocado e o time '%d'."
	"\nO terceiro colocado e o time '%d'.", primeiro, segundo, terceiro);
	
	return 0;
}
