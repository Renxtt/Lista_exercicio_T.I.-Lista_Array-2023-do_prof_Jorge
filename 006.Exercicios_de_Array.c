#include <stdlib.h>
#include <stdint.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <string.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	
//006) Elabore um programa que receba e mostre dados armazenados em um vetor de cinco alunos(cod) e suas respectivas notas bimestrais. (Usar c�d para alunos)
	
	int cod[5], cont;
	char nome[100][5];
	
	
	for(int i=0;i<=4;i++){
		cont=i+1;
		printf("Qual � o Nome do %d�Aluno: ", cont);
		scanf("%s", &nome[i]);
		
		printf("Qual � a Nota do Aluno %s: ", nome[i]);
		scanf("%d", &cod[i]);
		
	}
	
	for(int i=0;i<=4;i++){
		cont=i+1;
		printf("\nO %d�Aluno �: %s", cont, nome[i]);
		printf("\nE sua nota � %d", cod[i]);
	}
	
	return 0;
}
