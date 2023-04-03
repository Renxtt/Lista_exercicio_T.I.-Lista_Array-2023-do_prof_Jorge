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

//	013) Utilizando vetor, crie um programa que digite a quantidade de números a ser digitada. Após	digitar esses números mostrar na ordem inversa à digitada.

	int qtd_numb, cont;
		is
	printf("Qual é a quantidade de números avaliados: ");
	scanf("%d", &qtd_numb);
	
	int numb[qtd_numb];
	qtd_numb= qtd_numb-1;	
	for(int i=0;i<=qtd_numb;i++){
		cont = i+1;
		printf("Digite o %dºNúmero: ", cont);
		scanf("%d", &numb[i]);
	}
	for(int i=qtd_numb;i>=0;i--){
		cont = i+1;
		printf("\nO %dºNúmero é: %d", cont, numb[i]);
	}
	
	
	return 0;
}
