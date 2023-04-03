#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
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
	
//010) Elabore um programa que receba o NOME, EMAIL, TELEFONE de 10 contatos e exiba no	final em forma de uma tabela.(Verificar Ponteiros)	
	
	char name[10][100], email[10][100], tel[10][100], cabeca[3][300];
	int cont;
	
	for(int i=0;i<1;i++){
		cont = i+1;
		printf("Digite o %dºNome: ", cont);
		scanf("%s",&name[i]);
		
		printf("Digite o E-mail do %s ",name[i]);
		scanf("%s",&email[i]);
		
		printf("Digite o Seu telefone usando caracteres especiais como (), +, -\nDa seguinte forma +00 (DDD) 00000-0000\nDigite: ");
		scanf("%s",&tel[i]);
	}
	strcpy(cabeca[0], "NOME");
	strcpy(cabeca[1], "E-MAIL");
	strcpy(cabeca[2], "TELEFONE");
	
	
	for(int i=0;i<2;i++){
		cont = i+1;
		printf("\n+----------+------------+----------------------+");
		printf("\n|  %10s   |   %25s   |        %25s      |", cabeca[0], cabeca[1], cabeca[2]);
		printf("\n|    %10s    |     %25s     | %25s |", name[i], email[i], tel[i]);
	}
	return 0;
}
