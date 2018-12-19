#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	printf("Informe o terceiro numero: ");
	scanf("%f", &n3);
	
	if (n1 >= n2) {
		
		if (n2 >= n3){
		printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f", n1, n2, n3);
		} else {
			if (n1 >= n3 && n3 >= n2){
			printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f", n1, n3, n2);
			} else {
				if (n3 >= n1){
				printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f", n3, n1, n2);
				}
			}
		}
		
	} else {
	
		if (n1 >= n3){
		printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f", n2, n1, n3);
		} else {
			if (n2 >= n3 && n3 >= n1){
			printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f", n2, n3, n1);
			} else {
				if (n3 >= n2){
				printf("A ordem decrescente dos numeros e: %.2f, %.2f, %.2f", n3, n2, n1);
				}
			}
		}
	}
	return 0;
}

