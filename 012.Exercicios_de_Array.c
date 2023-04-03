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
	
//012) Utilizando vetor, elabore um algoritmo que leia 20 números inteiros e exiba-os na ordem inversa.
	
	int nub[20];
	
	for(int i=0;i<20;i++){
		printf("Digigi um número: ");
		scanf("%d", &nub[i]);
	}
	for(int i=20;i>0;i--){
		printf("\no número %d é: ", nub[i]);
	}
	
	return 0;
}
