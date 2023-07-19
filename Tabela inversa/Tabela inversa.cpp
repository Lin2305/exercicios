#include <stdio.h>

int main(){
	
	int tabela[5], i;
	
	for (i = 0; i < 5; i++){
		printf("Digite um numero: \n");
		scanf("%i", &tabela[i]);
	}
		printf("Tabela normal: \n");
		for(i= 0; i < 5; i++){
			printf("%i \n ", tabela[i]);
		}
		printf("Tabela inversa: \n");
		for(i=4; i >= 0; i--){
			printf("%i \n", tabela[i]);
	
}}
