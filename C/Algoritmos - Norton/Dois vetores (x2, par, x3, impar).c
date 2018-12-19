#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet[10], x, z, verificacao;
	float vet2[10], percent_par, percent_impar, par = 0, impar = 0;
	
	for (x = 0; x < 10; x++){
		printf("\nInsira o numero da posicao, '%d': ", x);
		scanf("%d", &vet[x]);
	}
	
	for(z = 0; z < 10; z++){
		
		verificacao = vet[z] % 2;
		
		if (verificacao == 0){
			vet2[z] = vet[z] * 2;
			printf("\nO numero da posicao '%d' e par e seu dobro e igual a: %.0f", z, vet2[z]);
		}else{
			vet2[z] = vet[z] * 3;
			printf("\nO numero da posicao '%d' e impar e seu triplo e igual a: %.0f", z, vet2[z]);
		}
	}	
	return 0;
}
