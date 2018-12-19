#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int opcao;
float saque, verificaSaldo, deposito, continua, saldo = 2000;

do {
	printf("\n\nOla! \nEscolha a operacao a ser executada: "
		   "\n\n 1 - Ver Saldo"
		   "\n 2 - Saque"
		   "\n 3 - Deposito"
		   "\n\nOpcao: ");
		   
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1 : {
			printf("\n%.2f reais.", saldo);
			break;
		}
		case 2 : {
			printf("\n\n Informe o valor a ser sacado: ");
			scanf("%f", &saque);
			
			verificaSaldo = saldo - saque;
			
			if (verificaSaldo < 0){
				printf("\nSaldo insuficiente!");
			} else {
				saldo = verificaSaldo;
				
				printf("\nSeu saldo e de: %2.f reais.", saldo);
			}
			break;
		}
		case 3 : {
			printf("\n\n Informe o valor a ser depositado: ");
			scanf("%f", &deposito);
			
			saldo = saldo + deposito;
			
			printf("\n Seu saldo e de: %2.f reais.", saldo);
			break;
		}
		default : {
			printf("\n\nOpcao invalida!");
			break;
		}
	}
	printf("\n\nDeseja continuar? (Sim - 1/ Nao - 0): ");
	scanf("%f", &continua);
} while (continua == 1);

printf("\n\nObrigado por usar nossos servicos!");
	
	return 0;
}
