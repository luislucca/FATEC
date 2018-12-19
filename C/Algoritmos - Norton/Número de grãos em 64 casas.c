#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int cont;
float totalGrao = 1, somaGrao = 1;

for (cont = 0; cont < 63; cont++) {
	somaGrao = somaGrao * 2;
	totalGrao = totalGrao + somaGrao;
	printf("%d\n", cont);
}

printf("O numero de graos esperado era de %.2f", totalGrao);

	return 0;
}
