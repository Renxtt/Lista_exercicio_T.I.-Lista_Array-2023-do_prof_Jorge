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
	
//006) Elabore um programa que receba e mostre dados armazenados em um vetor de cinco alunos(cod) e suas respectivas notas bimestrais. (Usar cód para alunos)
	
	int cod[5], cont;
	char nome[100][5];
	
	
	for(int i=0;i<=4;i++){
		cont=i+1;
		printf("Qual é o Nome do %dºAluno: ", cont);
		scanf("%s", &nome[i]);
		
		printf("Qual é a Nota do Aluno %s: ", nome[i]);
		scanf("%d", &cod[i]);
		
	}
	
	for(int i=0;i<=4;i++){
		cont=i+1;
		printf("\nO %dºAluno é: %s", cont, nome[i]);
		printf("\nE sua nota é %d", cod[i]);
	}
	
	return 0;
}
