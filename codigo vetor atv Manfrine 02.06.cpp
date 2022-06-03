#include<stdlib.h> 
#include<stdio.h>
#include<locale.h>
#include<string.h> // Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui.
int main() {
	int n, num[10], cont = 0;
	setlocale(LC_ALL, "Portuguese");
		for(n = 0; n<10; n++){
		printf("Digite o %dº número: ", n+1);
		 scanf("%d", &num[n]);
		}
		for(n = 0; n<10; n++){
			if(num[n] % 2 == 0){
			cont++;
			}
		}
		printf("Valores pares nesse vetor: %d", cont);
}
