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
	
//007) Leia uma sequência de N números e exiba-a em ordem recebida (vetor tamanho variável)
	
	int repetcao, cont;
	
	printf("Quantos números terá essa repetição:");
	scanf("%d", &repetcao);
	
	int nub[repetcao];
	
	for(int i=0;i<=repetcao-1;i++){
		cont = i+1;
		printf("Qual é o seu %dºNúmero: ", cont);
		scanf("%d", &nub[i]);
	}
	for(int i=0;i<=repetcao-1;i++){
		cont = i+1;
		printf("\nO seu %dºNúmero é: %d", cont, nub[i]);
	}
	
	
	
	
	return 0;
}
