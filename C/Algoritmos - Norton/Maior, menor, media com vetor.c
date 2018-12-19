#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeros[20], x, maior, menor;
	float media, soma = 0;
	
	for(x = 0; x < 20; x++){
		
		printf("Insira um numero: ");
		scanf("%d", &numeros[x]);
		
		if(x == 0){
			maior = numeros[x];
			menor = numeros[x];
		}
		
		soma = soma + numeros[x];
		
		if(numeros[x] >= maior){
			maior = numeros[x];
		} else {
			if(numeros[x] <= menor){
				menor = numeros[x];
			}
		}
	}
	
	media = soma / 20;
	
	printf("\nA media, o menor e o maior numeros sao, respectivamente: %.2f, %d e %d", media, menor, maior);
	return 0;
}
