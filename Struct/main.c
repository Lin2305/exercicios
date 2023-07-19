#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct st_aluno{
		char matricula [20];
		char nome[50];
		char curso [50];
		int ano_nascimento;
	};
	
	int main() {
		
		int i;
		
			struct st_aluno aluno[4];
			for (i= 0; i<5; i++){
				printf("Informe a matricula do aluno:  \n");
				fgets(aluno[i].matricula, 20 , stdin);
				fflush(stdin);
				
				printf("Informe o nome do aluno:  \n");
				fgets(aluno[i].nome, 50 , stdin);
				fflush(stdin);
				
				printf("Informe a curso do aluno:  \n");
				fgets(aluno[i].curso, 50 , stdin);
				fflush(stdin);	
			
				printf("Informe o ano do nascimento do aluno:  \n");
				scanf("%i", &aluno[i].ano_nascimento);
				getchar();
				
				if (i < 5)
				printf("====Proximo Aluno=====\n");
				else
				printf("Fim da listagem");	
		}
		
		for  (i = 0; i < 5 ; i++){
			printf("===== Dados do aluno: %i \n", i);
			printf("Matricula: %s ", aluno[i].matricula);
			printf("Nome: %s ", aluno[i].nome);
			printf("Curso: %s ", aluno[i].curso);
			printf("Ano_nascimento: %i \n\n", aluno[i].ano_nascimento);			
		}
			return 0;
}
