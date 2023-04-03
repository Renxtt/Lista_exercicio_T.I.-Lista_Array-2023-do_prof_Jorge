#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <math.h>

main(void){
	
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	
//004) Criar um programa que leia e mostre os 10 dados digitados por um usuário.(Utilizar array e laço for)
	
	char dados[100][9];
	
	for(int i=0;i<=9;i++){
		printf("Digite o seu Dado: ");
		scanf("%s", &dados[i]);
	}
	
	for(int i=0;i<=9;i++){
		printf("\nDados: %s", dados[i]);
	}
	return 0;
}
