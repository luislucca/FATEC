#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int num, soma, cont = 0, media;

printf("Informe o primeiro numero para o calculo da media: ");
scanf("%d", &num);

soma = num;

while (num != 0) {
	cont++;
	
	printf("\nInforme o proximo numero para o calculo da media: ");
	scanf("%d", &num);	
	
	soma = soma + num;
 
}

media = soma / cont;

printf("\nA media dos numeros informados e igual a: %d", media);

	return 0;
}
