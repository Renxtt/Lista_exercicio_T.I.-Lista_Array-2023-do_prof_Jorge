#include <stdlib.h>
#include <stdio.h>
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
	
//009) Dada as temperaturas registradas diariamente, durante uma semana, informe em quantos dias a temperatura ficou acima da média.
	
	int temperatura[6];
	float media_temp;
	int cont;
	char dia[100];
	
	for(int i=0;i<=6;i++){
		if(i==0){
			strcpy(dia, "Sabado");
		}if(i==1){
			strcpy(dia, "Segunda-Feira");
		}if(i==2){
			strcpy(dia, "Terça-feira");
		}if(i==3){
			strcpy(dia, "Quarta-Feira");
		}if(i==4){
			strcpy(dia, "Quinta-Feira");
		}if(i==5){
			strcpy(dia, "Sexta-Feira");
		}if(i==6){
			strcpy(dia, "Domingo");
		}
		
		cont = i+1;
		printf("Qual erá a temperatura no %dºDia, %s: ", cont, dia);
		scanf("%d", &temperatura[i]);	
	}
	media_temp = (temperatura[0]+temperatura[1]+temperatura[2]+temperatura[3]+temperatura[4]+temperatura[5]+temperatura[6])/7;
	for(int j=0;j<=6;j++){
		if(temperatura[j]>media_temp){
			printf("A temperatura de %s, %d, foi maior que a média %f", dia, temperatura[j], media_temp);
		}
	}
	
	
	return 0;
}
