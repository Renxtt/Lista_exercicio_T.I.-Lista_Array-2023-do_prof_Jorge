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
	
//007) Leia uma sequ�ncia de N n�meros e exiba-a em ordem recebida (vetor tamanho vari�vel)
	
	int repetcao, cont;
	
	printf("Quantos n�meros ter� essa repeti��o:");
	scanf("%d", &repetcao);
	
	int nub[repetcao];
	
	for(int i=0;i<=repetcao-1;i++){
		cont = i+1;
		printf("Qual � o seu %d�N�mero: ", cont);
		scanf("%d", &nub[i]);
	}
	for(int i=0;i<=repetcao-1;i++){
		cont = i+1;
		printf("\nO seu %d�N�mero �: %d", cont, nub[i]);
	}
	
	
	
	
	return 0;
}
