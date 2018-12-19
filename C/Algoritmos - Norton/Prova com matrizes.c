#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int prova[10][5], gabarito[10][5], questao, alternativa, x, nota, y;
	
	nota = 0;
	y = 0;
	
	for (x = 0; x <= 4; x++){
		gabarito[x][y] = 1;
		y++;
	}
	
	y = 0;
	
	for (x = 5; x <= 9; x++){
		gabarito[x][y] = 1;
		y++;
	}
	
	printf("Por favor, insira o gabarito da sua prova."
	"\n Digite 1 para alternativa 'a'"
	"\n Digite 2 para alternativa 'b'"
	"\n Digite 3 para alternativa 'c'"
	"\n Digite 4 para alternativa 'd'"
	"\n Digite 5 para alternativa 'e'\n");
	
	for (questao = 0; questao <= 9; questao++){
		printf("\nQuestao %d :", questao + 1);
		scanf("%d", &alternativa);
		
		x = alternativa - 1;
		
		switch (alternativa){
			case 1:
				prova[questao][0] = 1;
				prova[questao][1] = 0;
				prova[questao][2] = 0;
				prova[questao][3] = 0;
				prova[questao][4] = 0;
				break;
			
			case 2:
				prova[questao][0] = 0;
				prova[questao][1] = 1;
				prova[questao][2] = 0;
				prova[questao][3] = 0;
				prova[questao][4] = 0;
				break;
			
			case 3:
				prova[questao][0] = 0;
				prova[questao][1] = 0;
				prova[questao][2] = 1;
				prova[questao][3] = 0;
				prova[questao][4] = 0;
				break;
			
			case 4:
				prova[questao][0] = 0;
				prova[questao][1] = 0;
				prova[questao][2] = 0;
				prova[questao][3] = 1;
				prova[questao][4] = 0;
				break;
			
			case 5:
				prova[questao][0] = 0;
				prova[questao][1] = 0;
				prova[questao][2] = 0;
				prova[questao][3] = 0;
				prova[questao][4] = 1;
				break;
		}
		
		if (prova[questao][x] == gabarito[questao][x]){
			nota++;
		}
	}
	
	printf("\n\nA nota do aluno e igual a: %d de um total de 10 pontos.", nota);
	
	return 0;
}
