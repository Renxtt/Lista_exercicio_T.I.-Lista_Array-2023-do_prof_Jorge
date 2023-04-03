#include <stdio.h>
#include <stdlib.h>
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
		
//005) Leia uma sequência de 10 números inteiros e exiba-os em ordem inversa.(Utilizar array e laço for)
	
	int nub[9];
	
	
	for(int i=0;i<=9;i++){
		printf("Digite um número: ");
		scanf("%d", &nub[i]);
	}
	for(int i=9;i>=0;i--){
		printf("\nNúmero: %d", nub[i]);
	}
	
	return 0;
}
