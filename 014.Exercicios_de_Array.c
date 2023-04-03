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
	
//	014) Escreva um módulo que retira todos os números repetidos das primeiras qtd_numero posições de um
//	vetor em ordem crescente, colocando-os em ordem crescente no final do vetor. Exemplo:
//	Para o vetor {1,2,2,3,3,4}, a solução é {1,2,3,4,2,3}.


  
    int qtd_numero, cont;  
    printf("Digite a quantidade de números");
    scanf("%d", &qtd_numero);

    int numero[qtd_numero];
    int repetidos[qtd_numero];
    
    for (int i = 0; i < qtd_numero; i++){
    	cont=i+1;
    	printf("Digite o %dºNúmero: ", cont);
        scanf("%d", &numero[i]);  
    }
    
    for (int i = 0; i < qtd_numero; i++){
        int num = numero[i];
        repetidos[i] = 0;  
        
        
        for (int j = 0; j < qtd_numero; j++){
            if (j != i && numero[j] == num){
                repetidos[j] = 1;  
                break;
                
            }
            
        }
        
        if (repetidos[i]==1) {
		    printf("%d ", num);
		}
        
    }
    
    
    for (int i = 0; i < qtd_numero; i++) {
        int num = numero[i];
        int count = 0;  
		        
        
        for (int j = 0; j < qtd_numero; j++) {
            if (numero[j] == num) {
                count++;
            }
        }
        
        
        if (count > 1) {
            printf("%d ", num);
        }
    }
    
    printf("\n");  
	
	    
    return 0;
}
