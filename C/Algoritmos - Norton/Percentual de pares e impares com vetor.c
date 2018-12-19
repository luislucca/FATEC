#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet[20], x, verificacao;
	float percent_par, percent_impar, par = 0, impar = 0;
	
	for (x = 0; x < 20; x++){
		printf("\nInsira o numero da posicao, '%d': ", x);
		scanf("%d", &vet[x]);
		
		verificacao = vet[x] % 2;
		
		if (verificacao == 0){
			par++;
		}else{
			impar++;
		}			
	}
	
	percent_par = (par * 100)/20;
	percent_impar = (impar * 100)/20;
	
	printf("\nO percentual de numeros pares e de: %.2f%"
	"\nE o de numeros impares e de: %.2f%", percent_par, percent_impar);
	
	return 0;
}
