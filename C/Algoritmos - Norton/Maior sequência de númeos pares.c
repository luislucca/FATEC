#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int somaGrao, totalGrao, grao, cont;

scanf("%d", &grao);

for (cont = 1; cont <= 64; cont++) {
	
	grao = grao * 2;
	totalGrao = somaGrao + grao;
}

printf("O numero de graos esperado era de %d.", totalGrao);

	return 0;
}
