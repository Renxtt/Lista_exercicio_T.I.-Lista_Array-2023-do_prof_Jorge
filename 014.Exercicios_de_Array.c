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
	
//	014) Escreva um m�dulo que retira todos os n�meros repetidos das primeiras N posi��es de um
//	vetor em ordem crescente, colocando-os em ordem crescente no final do vetor. Exemplo:
//	Para o vetor {1,2,2,3,3,4}, a solu��o � {1,2,3,4,2,3}.


    int arr[100];  // vetor com tamanho m�ximo de 100 elementos
    int n;  // n�mero de elementos a serem lidos
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // l� cada elemento do vetor
    }
    
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int is_repeated = 0;  // flag para indicar se o n�mero � repetido
        
        // procura por outras ocorr�ncias do mesmo n�mero no vetor
        for (int j = 0; j < n; j++) {
            if (j != i && arr[j] == num) {
                is_repeated = 1;  // marca como repetido
                break;
            }
        }
        
        // se o n�mero n�o � repetido, mant�m no vetor
        if (!is_repeated) {
            printf("%d ", num);
        }
    }
    
    // encontra e imprime todos os n�meros repetidos em ordem crescente
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int count = 0;  // conta quantas vezes o n�mero aparece no vetor
        
        // conta as ocorr�ncias do n�mero no vetor
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                count++;
            }
        }
        
        // se o n�mero aparece mais de uma vez, imprime-o
        if (count > 1) {
            printf("%d ", num);
        }
    }
    
    printf("\n");  // imprime uma quebra de linha no final da sa�da
    
    return 0;
}
