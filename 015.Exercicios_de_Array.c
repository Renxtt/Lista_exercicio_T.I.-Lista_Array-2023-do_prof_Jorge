#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#include <math.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	
//	015) Preencher um vetor com n�meros inteiros(8unidades); solicitar um n�mero do teclado.
//	Pesquisar se esse n�mero existe no vetor. Se existir,imprimir em qual posi��o do vetor. Se n�o
//	existir,imprimir MSG que n�o existe.
	
	int vector[8], procut, cont, j[8];
	char respt[100];
	system("color 02");
	
	do{
		for(int i=0;i<8;i++){
			cont=i+1;
			printf("Digite o %d�N�mero: ", cont);
			scanf("%d", &vector[i]);
		}
		printf("Digite o n�mero que voc� busca: ");
		scanf("%d",  &procut);
		system("CLs");
		for(int i=0;i<8;i++){
			j[i]=i+1;
			if(procut==vector[i]){
				printf("\nO Valor %d esta armazenado no vetor %d da variavel Vector\n", procut, i);
			}
		}
	
	
		if(procut!=vector[0]||procut!=vector[1]||procut!=vector[2]||procut!=vector[3]||procut!=vector[4]||procut!=vector[5]||procut!=vector[6]||procut!=vector[7]){
			printf("\nEsse n�mero n�o foi armazenado em nenhum outro vetor\n Vetor %d: %d\n Vetor %d: %d\n Vetor %d: %d\n Vetor %d: %d\n Vetor %d: %d\n Vetor %d: %d\n Vetor %d: %d\n Vetor %d: %d", j[0], vector[0], j[1], vector[1], j[2], vector[2], j[3], vector[3], j[4], vector[4], j[5], vector[5], j[6], vector[6], j[7], vector[7]);

		}
		
		printf("\nGostaria de recome�ar?(Sim ou N�o): ");
		scanf("%s", &respt);
		system("Cls");
	}while(strcmp(respt, "Sim")==0||strcmp(respt, "sim")==0);

	return 0;	
}
