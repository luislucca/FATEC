#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int num, maior, menor, soma, media, cont = 0;

printf("Insira o numero para a verificacao: ");
scanf("%d", &num);

maior = num;
menor = num;
soma = num;

	while (num != 0){
		cont++;
		printf("Insira o proximo numero para a verificacao: ");
		scanf("%d", &num);
		
		if (num != 0){
			soma = soma + num;
			
			if (num >= maior){
				maior = num;
			} else {
				if(num <= menor){
					menor = num;
				}
			}
		}
	}

media = soma / cont;

printf("O maior numero, o menor e a media sao, respectivamente: %d, %d, %d.", maior, menor, media);
	return 0;
}
