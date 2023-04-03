#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <windows.h>


main(void){
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	
//003) Criar um algoritmo que leia o nome de 30 pessoas.(Utilizar array e laço for)
	
	char nome[100][29];
	int cont=1;
	
	for(int i=0;i<=29;i++){
		cont=i+1;
		printf("Digite o %dºNome: ", cont);
		fgets(nome[i], 100, stdin);
	}
	
	for(int i=0;i<=29;i++){
		cont=i+1;
		printf("O %dºNome: %s",cont, nome[i]);
	}
	
	
	
	return 0;
}
