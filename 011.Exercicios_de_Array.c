#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <time.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	
//011) Elabore um programa que receba a quantidade de alunos, os nomes de notas desses alunos. Ao final mostrar a média, a maior e a menor nota.
	
	int qtd_alunos, cont;
	
	printf("Qual é a quantidade de alunos avaliados: ");
	scanf("%d", &qtd_alunos);
	
	char nome_alunos[qtd_alunos][100];
	float nota_bio[qtd_alunos], nota_mat[qtd_alunos], nota_port[qtd_alunos], nota_ll[qtd_alunos], nota_edf[qtd_alunos], media_nota[qtd_alunos];
	
	for(int i=0;i<qtd_alunos;i++){
		printf("\nDigite o nome: ");
		scanf("%s", &nome_alunos[i]);
		
		printf("Qual foi A nota de biologia do(a) %s: ", nome_alunos[i]);
		scanf("%f", &nota_bio[i]);
		
		printf("Qual é A nota de Matematica do(a) %s: ", nome_alunos[i]);
		scanf("%f", &nota_mat[i]);
		
		printf("Qual é a nota de Português do(a) %s: ", nome_alunos[i]);
		scanf("%f", &nota_port[i]);
		
		printf("Qual é A nota de Educação fisica do(a) %s: ", nome_alunos[i]);
		scanf("%f", &nota_edf[i]);
		
		printf("Qual é a nota de Lingua Inglesa do(a) %s: ", nome_alunos[i]);
		scanf("%f", &nota_ll[i]);		
		
		media_nota[i] = (nota_bio[i] + nota_edf[i] + nota_ll[i] + nota_mat[i] + nota_port[i])/5;
		
	}
	for(int i=0;i<qtd_alunos;i++){	
		printf("\nA media do(a) %s é: %.2f",nome_alunos[i], media_nota[i]);
	}
	cont=0;
	for(int i=cont+1;i<qtd_alunos;i++){
		for(int i=cont+1;i<qtd_alunos;i++){
			if(media_nota[cont]>=media_nota[i]){
				printf("\nolá a nota do %s é maior que a do %s", nome_alunos[cont], nome_alunos[i]);
			}
		}
		cont=cont+1;
	}
	return 0;
}
