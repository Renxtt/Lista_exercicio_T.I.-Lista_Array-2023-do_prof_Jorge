#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <windows.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	
//001) Criar um programa que leia dados e armazene em 10 espaços reservados.(Utilizar array)
	
	char dados[100][9];
	int cont;
	
	for(int i=0;i<=9;i++){
		cont = i+1;
		printf("\nDigite um Dado para armazenar no %dºArray: ",cont);
		scanf("%s", &dados[i]);
	}
	for(int i=0;i<=9;i++){
		cont = i+1;
		printf("\nO Dado armazenado no %dºVetor é: %s", cont, dados[i]);		
	}
	
	return 0;	
}
