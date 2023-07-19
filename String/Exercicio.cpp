#include<Stdio.h>



int main ()  {

	int valor[10], i, maior, menor, i_maior = 0, i_menor = 0; 
 
 		for(i=0; i<10; i++) 
 		{ 
 		printf("Escreva %d o valor ?\n ", i+1); 
		 scanf("%d", &valor[i]); 
 		}
 			for (i = 0; i < 10; i++) {
    		if (i == 0) {
        	valor[i] = maior;
        	valor[i] = menor; 
    		}
    		if (valor[i] > maior)	
    			maior = valor[i];
    		else	
    			if (valor[i] < menor)
    				menor = valor[i] ;  	
			 }
			
			 
			 
		/*	 for (i =0 ; i < 10 ; i ++){
			 	if ( i == 0){
			 		menor = valor[i]; 
				 }
				 if (valor[i] < menor )
				 fflush(stdout);
				 	menor = valor[i]; 
			 } */
			 
		printf(" o maior numero eh:  %d", maior);	
		printf(" o menor numero eh:  %d", menor);
				 
}

