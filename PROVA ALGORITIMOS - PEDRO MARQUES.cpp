#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <ctype.h>

int main (void){

int ano, divisao,divisao2,divisao3;
float cat_oposto, cat_adjacente, resultado, raiz, seno; 
char questao;
char nome [600];

printf ("[NOME DA DISCIPLINA : ALGORITIMO E PROGRAMAcAO]\n");
printf ("[PROFESSORA : JOYCE SIQUEIRA]\n");
printf ("[ALUNO : PEDRO HENRIQUE OLIVEIRA MARQUES]\n");
printf ("[CURSO : CIENCIA DA COMPUTAcAO]\n");
printf ("[REPOSITORIO GITHUB https://github.com/phxdablio/ALGORITIMOS/issues1]\n");

	
	printf ("[DIGITE LETRA A PARA QUESTAO A, OU LETRA B PARA QUESTAO B]\n");
	scanf ("%c",&questao);
	
	
	
	
	switch (questao){
		
		case 'a' : printf ("[DE UMA VALOR PARA O CATETO OPOSTO]\n");
		scanf ("%f",&cat_oposto);
		
		printf ("[DE UM VALOR PARA O CATETO ADJACENTE]\n");
		scanf ("%f",&cat_adjacente);
		
		resultado= (cat_oposto * cat_oposto) + (cat_adjacente * cat_adjacente);
		raiz = sqrt(resultado); 
		seno = cat_oposto/raiz;
		
		
		printf ("[O RESULTADO DA HIPOTENUSA E %f]\n",raiz);
		printf ("[O RESULTADO DO SENO E %f]\n",seno); break;
		
		case 'A' : printf ("[DE UMA VALOR PARA O CATETO OPOSTO]\n");
		scanf ("%f",&cat_oposto);
		
		printf ("[DE UM VALOR PARA O CATETO ADJACENTE]\n");
		scanf ("%f",&cat_adjacente);
		
		resultado= (cat_oposto * cat_oposto) + (cat_adjacente * cat_adjacente);
		raiz = sqrt(resultado); 
		seno = cat_oposto/raiz;
		
		
		printf ("[O RESULTADO DA HIPOTENUSA E %f]\n",raiz);
		printf ("[O RESULTADO DO SENO E %f]\n",seno); break;
		
		case 'b' : printf ("[DIGITE SEU NOME]\n");
		scanf ("%s",&nome);
		getchar();
		
		printf ("[DIGITE O AN0 QUE VOCE NASCEU]\n");
		scanf ("%d",&ano);
		
		if (ano > 1900 && ano <2022 && ano%4 ==0 && ano/100 > 0 && ano/400 >0){
			
			printf ("[%s NASCEU EM UM ANO BIXESTO]",nome);
		}
		else {
			printf ("[%s NAO NASCEU EM AN0 BIXESTO]",nome);
		}
		
		break;
		
		case 'B' : printf ("[DIGITE SEU NOME]\n");
		scanf ("%s",&nome);
		getchar();
		
		printf ("[DIGITE O AN0 QUE VOCE NASCEU]\n");
		scanf ("%d",&ano);
		
		if (ano > 1900 && ano <2022 && ano%4 ==0 && ano/100 > 0 && ano/400 >0){
			
			printf ("[%s NASCEU EM UM ANO BIXESTO]",nome);
		}
		else {
			printf ("[%s NAO NASCEU EM AN0 BIXESTO]",nome);
		}
		
		break;
		 default : printf ("[OPERADOR INVALIDO]");
		
		
	}
	}
