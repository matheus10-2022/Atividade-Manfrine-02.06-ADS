#include<stdlib.h> 
#include<stdio.h>
#include<locale.h>
#include<string.h> //Somar os valores de cada coluna e armaazenar em um vetor.
int main() {
   int matA[3][5], vet[5], l, c, soma; 
   setlocale(LC_ALL, "Portuguese");
   		for(c=0; c<5; c++){
			soma = 0;
			for(l=0; l<3; l++){
   			printf("Digite o valor da coluna %d, linha %d: ", c+1, l+1);
   			 scanf("%d", &matA[l][c]);
				soma+=matA[l][c];
			}
			vet[c] = soma;
   		}
			for(c=0; c<5; c++){
			printf("\nSoma da coluna %d: %d", c+1, vet[c]);
			}
}


